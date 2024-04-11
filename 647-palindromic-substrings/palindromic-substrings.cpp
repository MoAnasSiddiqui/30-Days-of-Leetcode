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
        string temp;

        for (auto i=0; i<s.size()-1; i++){
            temp = s[i];
            for (auto j = i+1; j<s.size(); j++){
                temp = temp + s[j];
                ans = ans + check(temp);
            }
        }
        return ans+s.size();
    }
};