class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> temp;
        int multiplier = 1;
        for (int i = 0; i < nums.size(); i++) {
            temp.push_back(multiplier);
            multiplier *= nums[i];
        }
        multiplier = 1;
        for (int i = nums.size() - 1; i > -1; i--) {
            temp[i] *= multiplier;
            multiplier *= nums[i];
        }
        return temp;
    }
};