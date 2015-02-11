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
    int depth(TreeNode *r) {
        if(r==NULL) {
            return 0;
        }
        
        int ldepth = depth(r->left);
        int rdepth = depth(r->right);
        return max(ldepth , rdepth) + 1;
    }
    
    bool isBalanced(TreeNode *root) {
        
        if(root == NULL) {
            return true;
        }
        
        int ld = depth(root->left);
        int rd = depth(root->right);
        
        int diff = abs(ld-rd);
        return (diff <=1 && isBalanced(root->left) && isBalanced(root->right));
    }
};