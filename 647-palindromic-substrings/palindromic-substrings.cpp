class Solution {
public:
    int countSubstrings(string s) {
        // Solution: 1 (Constant Space)
        // int count = 0;

        // for(int i=0; i<s.size(); i++) {
        //     int start = i;
        //     int end = i + 0;

        //     while( start>=0 && end < s.size() && s[end]==s[start]) {
        //         count++;
        //         start--;
        //         end++;
        //     }

        //     start = i;
        //     end = start + 1;

        //     while( start>=0 && end < s.size() && s[end]==s[start]) {
        //         count++;
        //         start--;
        //         end++;
        //     }
        // }
        // return count;

        // Solution: 2
        int ans = 0;
        vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
        
        for (int i = 0; i < s.size(); i++){
            for (int j = 0; j <= s.size()-1-i; j++){
                if (s[j] == s[i+j] && (i <= 1 || dp[j+1][i+j-1])){dp[j][i+j] = true; ans++;}
            }
        }

        return ans;
    }
};