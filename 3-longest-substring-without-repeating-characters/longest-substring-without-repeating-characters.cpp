class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> umap;
        int ans = 0;
        int start = 0;
        for (auto i = 0; i<s.size(); i++){
            if (umap[s[i]] <= start){
                umap[s[i]] = i+1;
            } else {
                ans = max(ans, i-start);
                start = umap[s[i]];
                umap[s[i]] = i+1;
            }
        }
        if (s.size()-start > ans){
            ans = s.size()-start;
        }
        return ans;
    }
}; 