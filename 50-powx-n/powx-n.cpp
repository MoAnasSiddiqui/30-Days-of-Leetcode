class Solution {
public:
    double myPow(double x, int n) {
        // if (x == 0 || x == 1 || (x==-1 && n%2==1)){return x;}
        // if (n == 0){return 1;}
        // if (x == -1 && n%2 == 0){return 1;}

        // if (n < 0){x = 1/x;}
        // if (n == INT_MIN){n = INT_MAX;}
        // else {n = abs(n);}
        
        // double ans = x;
        // for (auto i = 1; i < n; i++){
        //     if (i < n/2){
        //         ans = ans*ans;
        //         i = (2*i)-1;
        //     } else {ans = ans*x;}
            
        //     if (ans == 0){break;}
        // }

        if (x==-1 && n%2==1){return x;}
        if (n == 0 || (x == -1 && n%2 == 0)){return 1;}

        if (n < 0){x = 1/x;}
        if (n == INT_MIN){n = INT_MAX;}
        else {n = abs(n);}

        double ans = x;
        double multiplier = 1;

        while (n != 1){
            if (n % 2 == 1){
                multiplier = multiplier * ans;
                n--;
            } else {
                ans = ans*ans;
                n = n/2;
            }
        }
        
        return ans*multiplier;
    }
};