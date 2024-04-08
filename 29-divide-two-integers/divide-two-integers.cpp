// class Solution {
// public:
//     int divide(int dividend, int divisor) {
//         if(dividend==INT_MIN && divisor==-1) return INT_MAX;
//         if(dividend==INT_MIN && divisor==1) return INT_MIN;

//         bool sign = (dividend<0 && divisor>0) || (dividend>0 && divisor<0);
//         long dd = abs(dividend), dv = abs(divisor);
//         int count = 1;

//         while (dv <= dd){
//             while (dv+dv < dd){
//                 dv = dv + dv;
//                 count = count*2;
//             }
//         }

//         if (sign == true){return -count;}
//         else{return count;}
//     }
// };
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        if(dividend==INT_MIN && divisor==1) return INT_MIN;
        if(dividend==INT_MAX && divisor==1) return INT_MAX;
        if(dividend==INT_MAX && divisor==-1) return INT_MIN+1;

        bool sign = (dividend<0 && divisor>0) || (dividend>0 && divisor<0);
        long long dd = abs(dividend), dv = abs(divisor);
        long long count = 0;
        
        while (dv <= dd){
            dv = dv + abs(divisor);
            count++;
        }

        if (sign == true){return -count;}
        else{return count;}
    }
};