class Solution {
public:
    string check(string s, int start, int end){
        int top = -1;
        string ans;
        while (start >= 0 && end < s.size()){
            if (s[start] == s[end]){
                if (end-start+1 > top){
                    top = end - start + 1;
                    ans = s.substr(start, end-start+1);
                }
            }
            else {break;}
            start--;
            end++;
        }
        return ans;
    }
    string longestPalindrome(string s) {
        string ans = "";

        for (auto i=0; i<s.size(); i++){
            if (check(s, i, i+1).size() > ans.size()){
                ans = check(s, i, i+1);
            }
            if (check(s, i, i).size() > ans.size()){
                ans = check(s, i, i);
            }
        }
        return ans;
    }
};