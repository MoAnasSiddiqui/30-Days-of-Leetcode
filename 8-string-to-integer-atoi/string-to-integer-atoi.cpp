class Solution {
public:
    int myAtoi(string s) {
        long ans = 0;
        int sign = 1;
        bool pos = 0;
        for (auto i: s){
            if (pos == 1 && ((int)i < 48 || (int)i > 57)){break;}
            
            if (pos == 0 && i == ' '){continue;}
            else if (pos == 0 && (i == '-' || i == '+')){
                if (i == '-'){sign = -1;}
                pos = 1;
            }
            else if (pos == 0 && ((int)i < 48 || (int)i > 57)){return 0;}
            
            if ((int)i >= 48 && (int)i <= 57){
                pos = 1;
                ans = (ans*10) + (int)i - 48;
                cout << ans << endl;
            } 
            if (sign*ans > INT_MAX){return INT_MAX;}
            if (sign*ans < INT_MIN){return INT_MIN;}           
        }
        return sign*ans;
    }
};