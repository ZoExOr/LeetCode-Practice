
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == nullptr) return 0;

        TreeNode* l = root, * r = root;
        int lh = 0, rh = 0;
        
        while(l != nullptr){
            l = l->left;
            lh++;
        }

        while(r != nullptr){
            r = r->right;
            rh++;
        }

        if(lh == rh) return pow(2, lh) - 1;
        else return countNodes(root->left) + countNodes(root->right) + 1;
    }
};
