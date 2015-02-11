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

    int sumUtils(TreeNode *root , int val) {
        if(root==NULL) {
            return 0;
        }
        
        int nVal = root->val+(val*10);
        if(root->left == NULL && root->right==NULL) {
            return nVal;
        }
        
        return sumUtils(root->left , nVal) + sumUtils(root->right , nVal);
    }
    int sumNumbers(TreeNode *root) {
        return sumUtils(root, 0);
    }
};