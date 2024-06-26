class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return help(nums, 0, nums.size()-1);
    }
    TreeNode* help (vector<int>& nums, int start, int end){
        if (start>end){return nullptr;}
        else {
            int mid = (start+end)/2;
            TreeNode* temp = new TreeNode(nums[mid]);
            temp->left = help(nums, start, mid-1);
            temp->right = help(nums, mid+1, end);
            return temp;
        }
    }
};