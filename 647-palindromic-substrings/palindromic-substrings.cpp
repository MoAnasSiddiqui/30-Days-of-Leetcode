class Solution {
public:
    int countSubstrings(string s) {
        // Solution: 1
        int count = 0;

        for(int i=0; i<s.size(); i++) {
            int start = i;
            int end = i + 0;

            while( start>=0 && end < s.size() && s[end]==s[start]) {
                count++;
                start--;
                end++;
            }

            start = i;
            end = start + 1;

            while( start>=0 && end < s.size() && s[end]==s[start]) {
                count++;
                start--;
                end++;
            }
        }
        return count;

        // Solution: 2
        // vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
        // for (int i = 0; i < s.size(); ++i){dp[i][i] = true, ans++;}

        // for (int i = 0; i < s.size()-1; i++){if (s[i] == s[i+1]){dp[i][i+1] = true; ans++;}}

        // return ans;
    }
};