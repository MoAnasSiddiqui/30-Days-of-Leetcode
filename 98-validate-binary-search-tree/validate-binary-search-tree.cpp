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
    bool ans = true;
    bool temp = false;
    int check;
    bool isValidBST(TreeNode* root) {
        if (root != nullptr){
            isValidBST(root->left);
            if (temp == false || root->val > check){
                check = root->val;
                temp = true;
            }
            else {
                ans = false;
                root->right = nullptr;
            }
            isValidBST(root->right);
        }
        return ans;
    }
};