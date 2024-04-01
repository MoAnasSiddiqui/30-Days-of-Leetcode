class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr){return root;}
        queue<TreeNode*> q;
        TreeNode* temp;
        TreeNode* change;
        q.push(root);
        while (q.empty() == false){
            int count = q.size();
            for (int i = 1; i <= count; i++){
                temp = q.front();
                change = temp->left;
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