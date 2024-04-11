class Solution {
public:
    bool check(string s, int start, int end){
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
            for (auto j = i+1; j<=s.size(); j++){
                ans = ans + check(s, i, j);
            }
        }
        return ans+s.size();
    }
};