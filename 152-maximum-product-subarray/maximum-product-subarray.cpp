class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product = 1; 
        int answer = -11;
        for (int i = 0; i<nums.size(); i++){
            product = product * nums[i];
            if (product > answer){answer = product;}
            if (nums[i] == 0){product =1;}
        }
        product = 1;
        for (int i = nums.size()-1; i>=0; i--){
            product = product * nums[i];
            if (product > answer){answer = product;}
            if (nums[i] == 0){product =1;}
        }
        return answer;
    }
};