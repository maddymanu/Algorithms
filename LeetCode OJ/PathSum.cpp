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
    bool hasPathSum(TreeNode *root, int sum) {
        if(root == NULL) {
            return false;
        }
        // if(sum == 0 && root->left == NULL && root->right==NULL) {
        //     return true;
        // }
        
        if(root->val == sum && root->left == NULL && root->right==NULL) {
            return true;
        }
        int newS = sum - root->val;
        return hasPathSum(root->left , newS) ||
                hasPathSum(root->right , newS);
    }
};