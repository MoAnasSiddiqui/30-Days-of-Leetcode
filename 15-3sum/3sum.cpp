// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         vector<vector<int>> answer;
//         unordered_map<int, int> umap;

//         for (int i = 0; i < nums.size(); i++){umap[nums[i]] = i+1;}

//         for (int i = 0; i<nums.size(); i++){
//             if (nums[i] > 0){break;}
//             if (i !=0 && nums[i] == nums[i-1]){continue;}

//             for (int j=i+1; j<nums.size(); j++){
//                 if (j != i+1 && nums[j] == nums[j-1]){continue;}

//                 if (umap[-nums[i]-nums[j]] != 0 && umap[-nums[i]-nums[j]] > j+1){
//                     answer.push_back( {nums[i], nums[j], nums[umap[-nums[i] - nums[j]]-1]});
//                 }
//             }
//         }
//         return answer;
//     }
// };
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> answer;
        int sum, start, end;
        for (int i = 0; i<nums.size(); i++){
            if (i != 0 && nums[i] == nums[i-1]){continue;}
            start = i+1;
            end = nums.size()-1;
            if (nums[i] > 0 || nums[end] < 0){break;}
            while (end > start){
                sum = nums[i] + nums[start] + nums[end]; 
                if (sum == 0){
                    answer.push_back({nums[i], nums[start], nums[end]});
                    start++;
                    end--;
                    while (start < end && nums[start] == nums[start-1]){start++;}
                    while (start < end && nums[end] == nums[end+1]){end--;}
                }
                else if (sum > 0){end--;}
                else {start++;}
            }
        }
        return answer;
    }
};