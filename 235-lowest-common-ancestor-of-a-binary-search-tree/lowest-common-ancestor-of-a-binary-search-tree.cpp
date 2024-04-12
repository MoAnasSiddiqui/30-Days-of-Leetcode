class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (max(p->val,q->val) > root->val && min(p->val,q->val) < root->val){
            return root;
        } else if (root == p || root == q){
            return root;
        } else if (p->val > root->val){
            return lowestCommonAncestor(root->right, p, q);
        } else {
            return lowestCommonAncestor(root->left, p, q);
        }
    }
};