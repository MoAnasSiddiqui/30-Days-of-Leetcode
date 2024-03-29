class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> umap;
        int ans = 0;
        int count = 0;
        for (int i = 0; i<s.size(); i++){
            if (umap[s[i]] == 0){
                count ++ ;
                umap[s[i]] = i+1;
            }
            else {
                ans = max(ans,count);
                i = umap[s[i]] - 1;
                umap.clear();
                count = 0;
            }
        }
        return max(count,ans);
    }
}; 