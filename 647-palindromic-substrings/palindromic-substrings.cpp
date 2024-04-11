class Solution {
public:
    int countSubstrings(string s) {
        int count = 0;

        for(int i=0; i<s.size(); i++) {
            int left = i;
            int right = i + 0;

            while( left>=0 && right < s.size() && s[right]==s[left]) {
                count++;
                left--;
                right++;
            }

            left = i;
            right = left + 1;

            while( left>=0 && right < s.size() && s[right]==s[left]) {
                count++;
                left--;
                right++;
            }
        }
        return count;
        // int ans = 0;

        // Solution: 1
        // for (auto i=0; i<s.size(); i++){
        //     count = count + check(s, i, i+1) + check(s, i, i);
        // }

        // Solution: 2
        // vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
        // for (int i = 0; i < s.size(); ++i){dp[i][i] = true, ans++;}

        // for (int i = 0; i < s.size()-1; i++){if (s[i] == s[i+1]){dp[i][i+1] = true; ans++;}}

        // return ans;
    }
};