class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int left = maxDepth(root->left);
        int right= maxDepth(root->right);
        if(left>right)
            return 1+left;
        else
            return right+1;        
    }
};