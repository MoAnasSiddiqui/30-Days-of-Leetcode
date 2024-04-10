class Solution {
public:
    int countSubstrings(string s) {
        string rev = s;
        reverse(rev.begin(), rev.end());
        int ans = 0;

        for (auto i=0; i<s.size()-1; i++){
            for (auto j = i+2; j<=s.size(); j++){
                if (s.substr(i, j-i) == rev.substr(rev.size()-j, j-i)){ans++;}
            }
        }
        return ans+s.size();;
    }
};