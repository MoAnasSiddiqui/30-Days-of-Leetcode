class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
        int top = 0;

        for (auto i=0; i<s.size(); i++){
            for (auto j = i+1; j<=s.size(); j++){
                string rev = s.substr(i, j-i);
                reverse(rev.begin(), rev.end());
                if (s.substr(i, j-i) == rev){
                    ans++;
                }
            }
        }
        return ans;
    }
};