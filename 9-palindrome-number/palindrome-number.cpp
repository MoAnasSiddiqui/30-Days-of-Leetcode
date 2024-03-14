class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){return false;}
        unsigned int reversed = 0;
        int temp = x;
        while (x != 0){
            reversed = (reversed*10) + (x%10);
            x = x/10;
        }
        if (reversed == temp){return true;}
        else{return false;}
    }
};