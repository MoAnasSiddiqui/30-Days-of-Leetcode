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
        int count = 0;

        for (auto i=0; i<s.size(); i++){
            count = count + check(s, i, i+1) + check(s, i, i);
        }
        return count;
    }
};