class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr){return root;}
        queue<TreeNode*> q;
        q.push(root);
        while (q.empty() == false){
            int count = q.size();
            for (int i = 1; i <= count; i++){
                TreeNode* temp = q.front();
                TreeNode* change = temp->left;
                temp->left = temp->right;
                temp->right = change;
                if (temp->left != nullptr){q.push(temp->left);}
                if (temp->right != nullptr){q.push(temp->right);}
                q.pop();
            }
        }
        return root;
    }
};