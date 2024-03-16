// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int ans = INT_MAX;
//         for (auto i = 0; i<nums.size(); i++){
//             if (nums[i] < ans){ans = nums[i];}
//             if (nums[(i+nums.size()-1)%(nums.size())] > nums[i]){break;}
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
        int mid;
        while (nums[left] > nums[right]){
            mid = (left+right)/2;
            if (nums[mid] > nums[right]){left = mid+1;}
            else if (nums[mid] < nums[right]){right = mid;}
        }
        return nums[left];
    }
};