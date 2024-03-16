class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        vector<int> answer;
        for (int i=0; i<nums.size(); i++){
            if (umap[target - nums[i]] != 0){
                answer.push_back(i);
                answer.push_back(umap[target - nums[i]] - 1);
                break;
            }
            umap[nums[i]] = i+1;
        }
        return answer; 
    }
};