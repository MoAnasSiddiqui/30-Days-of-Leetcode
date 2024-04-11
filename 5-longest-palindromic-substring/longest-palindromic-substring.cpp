class Solution {
public:
    string longestPalindrome(string s) {
        int top = 0;
        string ans;

        for(int i=0; i<s.size(); i++) {
            int start = i;
            int end = i + 0;

            while( start>=0 && end < s.size() && s[end]==s[start]) {
                if (end-start+1>top){top = end-start+1, ans = s.substr(start, end-start+1);}
                start--;
                end++;
            }

            start = i;
            end = start + 1;

            while( start>=0 && end < s.size() && s[end]==s[start]) {
                if (end-start+1>top){top = end-start+1, ans = s.substr(start, end-start+1);}
                start--;
                end++;
            }
        }
        return ans;
    }
};