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
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*> stk;
        while (root != nullptr || stk.empty() == false){
            while (root != nullptr){
                stk.push(root);
                root = root->left;
            }
            k--;
            if (k == 0){
                return stk.top()->val;
            }
            root = stk.top()->right;
            stk.pop();
        }
        return -1;
    }
};