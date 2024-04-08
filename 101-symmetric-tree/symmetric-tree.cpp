class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        deque<TreeNode*> q;
        TreeNode* temp;
        q.push_back(root);
        while (q.empty() == false){
            int count = q.size()-1;
            for (int i = 0; i<= count/2; i++){
                if (q[i]->left != nullptr && q[count-i]->right == nullptr || q[i]->left == nullptr && q[count-i]->right !=nullptr){return false;}
                if (q[i]->right != nullptr && q[count-i]->left == nullptr || q[i]->right == nullptr && q[count-i]->left !=nullptr){return false;}
                if (q[i]->left != q[count-i]->right && q[i]->left->val != q[count-i]->right->val){return false;}
                if (q[i]->right != q[count-i]->left && q[i]->right->val != q[count-i]->left->val){return false;}
            }
            for (int i = 0; i <= count; i++){
                temp = q.front();
                if (temp->left != nullptr){q.push_back(temp->left);}
                if (temp->right != nullptr){q.push_back(temp->right);}
                q.pop_front();
            }
        }
        return true;
    }
};