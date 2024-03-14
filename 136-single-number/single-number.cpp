class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> umap;
        for (auto i = 0; i < nums.size(); i++) {
            if (umap.count(nums[i]) == 0) {
                umap.insert({nums[i], 1});
            } else {
                umap[nums[i]] = 2;
            }
        }
        for (auto i = 0; i < nums.size(); i++) {
            if (umap[nums[i]] == 1) {
                return nums[i];
            }
        }
        return 0;
    }
};