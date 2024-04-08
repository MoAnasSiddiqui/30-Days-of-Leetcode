class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) return 1;
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        if(dividend==INT_MAX && divisor==1) return INT_MAX;
        if(dividend==INT_MAX && divisor==-1) return INT_MIN+1;

        int sign = (dividend<0 && divisor>0) || (dividend>0 && divisor<0)? -1:1;
        dividend = abs(dividend), divisor = abs(divisor);
        int count = 0;
        
        while (divisor <= dividend){
            long temp1 = divisor;
            long temp2 = 1;
            while (temp1<<1 <= dividend){
                temp1 = temp1 << 1;
                temp2 = temp2 << 1;
            }
            count = count + temp2;
            dividend = dividend - temp1;
        }

        return sign*count;
    }
};