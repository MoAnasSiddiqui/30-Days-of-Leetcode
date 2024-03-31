class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> umap;
        vector<vector<string>> ans;
        string original;
        for (auto i: strs){
            original = i;
            sort(i.begin(), i.end());
            if (umap[i] == 0){
                ans.push_back({original});
                umap[i] = ans.size();
            } else {
                ans[umap[i]-1].push_back(original);
            }
        }
        return ans;
    }
};