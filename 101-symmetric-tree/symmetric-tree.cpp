// class Solution {
// public:
//     bool isSymmetric(TreeNode* root) {
//         deque<TreeNode*> q;
//         TreeNode* temp;
//         q.push_back(root);
//         while (q.empty() == false){
//             int count = q.size()-1;
//             for (int i = 0; i<= count/2; i++){
//                 if (q[i]->left != nullptr && q[count-i]->right == nullptr || q[i]->left == nullptr && q[count-i]->right !=nullptr){return false;}
//                 if (q[i]->right != nullptr && q[count-i]->left == nullptr || q[i]->right == nullptr && q[count-i]->left !=nullptr){return false;}
//                 if (q[i]->left != q[count-i]->right && q[i]->left->val != q[count-i]->right->val){return false;}
//                 if (q[i]->right != q[count-i]->left && q[i]->right->val != q[count-i]->left->val){return false;}
//             }
//             for (int i = 0; i <= count; i++){
//                 temp = q.front();
//                 if (temp->left != nullptr){q.push_back(temp->left);}
//                 if (temp->right != nullptr){q.push_back(temp->right);}
//                 q.pop_front();
//             }
//         }
//         return true;
//     }
// };
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
     bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL)
        {
            return true;
        }
        if(p == nullptr || q == nullptr)  
        {
            return false;
        }
        if(p->val == q->val)
        {
            return isSameTree(p->left,q->right) && isSameTree(p->right,q->left);
        }
        return false;
    }
class Solution {
public:

    bool isSymmetric(TreeNode* root) {
        if(root==nullptr)return false;
        if(root->left==nullptr&&root->right==nullptr)return true;
        if(root->left==nullptr||root->right==nullptr)return false;
        
        return isSameTree(root->left,root->right);
    }
};