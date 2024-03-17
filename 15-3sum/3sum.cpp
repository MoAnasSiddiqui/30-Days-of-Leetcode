class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> answer;
        unordered_map<int, int> umap;

        for (int i = 0; i < nums.size(); i++){umap[nums[i]] = i+1;}

        for (int i = 0; i<nums.size(); i++){
            if (nums[i] > 0){break;}
            if (i !=0 && nums[i] == nums[i-1]){continue;}

            for (int j=i+1; j<nums.size(); j++){
                if (j != i+1 && nums[j] == nums[j-1]){continue;}

                if (umap[-nums[i]-nums[j]] != 0 && umap[-nums[i]-nums[j]] > j+1){
                    answer.push_back( {nums[i], nums[j], nums[umap[-nums[i] - nums[j]]-1]});
                }
            }
        }
        return answer;
    }
};