
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int>result;
        inorder(root, result);
        return result[k - 1];
    }

private:
    void inorder(TreeNode* root, vector<int>&result){
        if (root == nullptr) return;
        inorder(root->left, result);
        result.push_back(root->val);
        inorder(root->right, result);
    }
};
