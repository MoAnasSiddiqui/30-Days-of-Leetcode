class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        for (auto i = 0; i<nums.size(); i++){
            if (nums[i] < ans){ans = nums[i];}
            if (nums[(i+nums.size()-1)%(nums.size())] > nums[i]){break;}
        }
        return ans;
    }
};
// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int l = 0, r = nums.size() - 1;

//         while (nums[l] > nums[r]) {
//             int m = (l + r) / 2;

//             if (nums[l] <= nums[m])
//                 l = m + 1;
//             else
//                 r = m;
//         }

//         return nums[l];
//     }
// };