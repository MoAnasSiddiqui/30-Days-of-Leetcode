class Solution {
public:
    bool check(string s){
        int start = 0;
        int end = s.size()-1;
        while (start < end){
            if (s[start] != s[end]){return false;}
            start ++;
            end --;
        }
        return true;
    }
    int countSubstrings(string s) {
        int ans = 0;

        for (auto i=0; i<s.size()-1; i++){
            for (auto j = i+2; j<=s.size(); j++){
                ans = ans + check(s.substr(i, j-i));
            }
        }
        return ans+s.size();
    }
};