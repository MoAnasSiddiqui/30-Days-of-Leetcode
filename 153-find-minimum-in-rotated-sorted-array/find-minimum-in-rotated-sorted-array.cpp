class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        for (auto i = 0; i<nums.size(); i++){
            if (nums[i] < ans){ans = nums[i];}
            // if (nums[(i+nums.size()-1)%(nums.size())] > nums[i]){break;}
        }
        return ans;
    }
};