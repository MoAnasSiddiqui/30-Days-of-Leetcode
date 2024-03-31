class Solution {
public:
    int climbStairs(int n) {
        int temp1 = 0;
        int temp2 = 1;
        int x;
        for (int i = 2; i<=n; i++){
            x = temp1+temp2;
            temp1 = temp2;
            temp2 = x;
        }
        return temp2+temp1;
    }
};