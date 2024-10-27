/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        vector<TreeNode*> l;
        preOrderTraversal(root, l);
        int n = l.size();

        for(int i = 1; i < n; i++){
            TreeNode* prev = l[i - 1], * cur = l[i];
            prev->left = nullptr;
            prev->right = cur;
        }
    }

private:
    void preOrderTraversal(TreeNode* root, vector<TreeNode*> &l){
        if (root == nullptr) return;
        
        l.push_back(root);
        preOrderTraversal(root->left, l);
        preOrderTraversal(root->right, l);
    }
};
