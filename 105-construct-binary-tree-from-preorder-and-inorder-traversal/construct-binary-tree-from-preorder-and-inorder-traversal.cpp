class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int index = 0;
        return help(preorder, inorder, 0, (inorder.size())-1, index);
    }
    TreeNode* help(vector<int>& preorder, vector<int>& inorder, int start, int end, int& index){
        if (end < start){return nullptr;}
        TreeNode* head = new TreeNode(preorder[index]);
        index++;
        int temp;
        for (int i=start; i<=end; i++){
            if (inorder[i] == head->val){temp = i;}
        }
        head->left = help(preorder, inorder, start, temp-1, index);
        head->right = help(preorder, inorder, temp+1, end, index);
        return head;
    }
};