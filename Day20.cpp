class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size() == 0)    return NULL;
        return bstUtil(preorder, 0, preorder.size() - 1);
    }
    
    TreeNode* bstUtil(vector<int>& preorder, int start, int end)
    {
        if(start>end)
            return NULL;
        
        TreeNode* root = new TreeNode(preorder[start]);
        
        int i = start+1;
        while(i<=end and preorder[i]<preorder[start])
            i++;
        root->left = bstUtil(preorder, start+1, i-1);
        root->right = bstUtil(preorder, i, end);
        
        return root;
    }
};
