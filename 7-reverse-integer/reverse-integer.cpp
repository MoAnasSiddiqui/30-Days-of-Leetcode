class Solution {
public:
    int reverse(int x) {
        int sign = (x < 0) ? -1:1;
        x = abs(x);
        long ans = 0;
        while (x != 0){
            if (ans * 10 >= INT_MAX){return 0;}
            ans = ans * 10;
            ans = ans + (x%10);
            x = x/10;
        }

        return sign * ans;
    }
};