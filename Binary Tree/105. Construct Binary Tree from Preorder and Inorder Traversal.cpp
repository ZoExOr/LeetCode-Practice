
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        for(int i = 0; i < inorder.size(); i++){
            index[inorder[i]] = i;
        }

        return buildTreeHelper(preorder, inorder, 0, n - 1, 0, n - 1);
    }

private:
    unordered_map<int, int> index;

    TreeNode* buildTreeHelper(vector<int>& preorder, vector<int>& inorder, int preorder_left, int preorder_right, int inorder_left, int inorder_right){
        if(preorder_left < preorder_right) return nullptr;

        int preorder_root = preorder_left;
        int inorder_root = index[preorder[preorder_root]];
        TreeNode* root = new TreeNode(preorder[preorder_root]);

        int size
    }
};
