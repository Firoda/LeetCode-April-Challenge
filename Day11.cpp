/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
         if(root == NULL)
            return 0;
        
        return diaUtil(root) - 1;
    }
    
    int diaUtil(TreeNode* root){
        if(root == NULL)
            return 0;
        int ld = diaUtil(root->left);
        int rd = diaUtil(root->right);
        
        int hl = height(root->left);
        int hr = height(root->right);
        
        return max(hl + hr + 1, max(ld, rd));
    }
    
    int height(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        else
            return 1+max(height(root->left), height(root->right));
    }
};
