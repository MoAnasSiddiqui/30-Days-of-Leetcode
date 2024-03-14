// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int,int> umap;
//         for (auto i = 0; i<nums.size(); i++){
//             umap[nums[i]]++;
//         }
//         for (auto i = 0; i<nums.size(); i++){
//             if (umap[nums[i]] == 1){return nums[i];}
//         }
//         return 0;
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (auto& i: nums){
            result = result ^ i;
        }
        return result;
    }
};