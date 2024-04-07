class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans(k+1);
        int temp;
        unordered_map<int,int> umap;
        for (auto i: nums){umap[i]++;}
        for (auto i: umap){
            ans[k] = i.first;
            for (int j = k-1; j>=0; j--){
                if (umap[ans[j+1]]>=umap[ans[j]]){
                    temp = ans[j+1];
                    ans[j+1] = ans[j];
                    ans[j] = temp;
                } else {break;}
            }
        }
        ans.pop_back();
        return ans;
    }
};