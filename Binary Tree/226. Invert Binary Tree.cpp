
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) return nullptr;

        TreeNode* l = invertTree(root->left);
        TreeNode* r = invertTree(root->right);
        
        root->left = r;
        root->right = l;
        return root;
    }
};
