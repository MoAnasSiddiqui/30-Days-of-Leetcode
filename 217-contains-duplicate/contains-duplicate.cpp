class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;
        for (auto i: nums){
            if (umap[i] == 1){return true;}
            else {umap[i] = 1 ;}
        }
        return false;
    }
};