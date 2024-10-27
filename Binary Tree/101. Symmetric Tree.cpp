
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return check(root, root);
    }

private:
    bool check(TreeNode* q, TreeNode* p){
        if(q == nullptr && p == nullptr) return true;
        if(q == nullptr || p == nullptr) return false;
       
        return q->val == p->val && check(q->left, p->right) && check(q->right, p->left);
    }
};
