class Solution {
public:
    int check(string s, int start, int end){
        int count = 0;
        while (start >= 0 && end < s.size()){
            if (s[start] == s[end]){count ++;}
            else {break;}
            start--;
            end++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int count = 0;

        for(int center=0; center<n; center++) {
            int left = center;
            int right = left + 0;

            while( left>=0 && right < n && s[right]==s[left]) {
                count++;
                left--;
                right++;
            }

            left = center;
            right = left + 1;

            while( left>=0 && right < n && s[right]==s[left]) {
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