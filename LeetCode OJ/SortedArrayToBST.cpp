/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* util(vector<int> &num , int start , int end) {
        if(start>end) {
            return NULL;
        }
        TreeNode*root;
        if(start ==  end) {
            return new TreeNode(num[start]);
        }
        int mid = (start+end)/2;
        root = new TreeNode(num[mid]);
        root->left = util(num , start , mid-1);
        root->right = util(num , mid+1 , end);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &num) {
        util(num , 0 , num.size()-1);
    }
};