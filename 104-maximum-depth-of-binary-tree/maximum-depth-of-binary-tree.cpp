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
class Solution{
public:
    int maxDepth(TreeNode* root){
        if (root == nullptr){
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//        int depth = 0;
//         queue<TreeNode*> q;
//         q.push(root);
//         while (q.empty() == false && q.front() != nullptr){
//             int s = q.size();
//             for (auto i = 1; i<=s; i++){
//                 TreeNode* temp = q.front();
//                 if (temp->left != nullptr){
//                     q.push(temp->left);
//                 }
//                 if (temp->right != nullptr){
//                     q.push(temp->right);
//                 }
//                 q.pop();
//             }
//             depth++;
//         } 
//         return depth;
//     }
// };