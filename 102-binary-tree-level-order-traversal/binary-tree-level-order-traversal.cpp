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
// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         if (root != nullptr){
//             queue<TreeNode*> q;
//             q.push(root);
//             while (q.empty() == false){
//                 int size = q.size();
//                 vector<int> temp;
//                 for (int i=0; i<size; i++){
//                     TreeNode* current = q.front();
//                     q.pop();
//                     temp.push_back(current->val);
//                     if (current->left != nullptr){
//                         q.push(current->left);
//                     }
//                     if (current->right != nullptr){
//                         q.push(current->right);
//                     }
//                 }
//                 ans.push_back(temp);
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        int count = 0;
        level(root , count , result);
        return result;

    }
private:
    void level(TreeNode* root , int count , vector<vector<int>> &result){
        if(root == NULL){
            return ;
        }
        if(result.size() <= count){
            result.push_back(vector<int>());
        }
        result[count].push_back(root->val);
        level(root->left , count+1 , result);
        level(root->right , count+1 , result);
  
    }    
};