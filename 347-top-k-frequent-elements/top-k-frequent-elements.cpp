// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         vector<int> ans(k+1);
//         int temp;
//         unordered_map<int,int> umap;
//         for (auto i: nums){umap[i]++;}
//         for (auto i: umap){
//             ans[k] = i.first;
//             for (int j = k-1; j>=0; j--){
//                 if (umap[ans[j+1]]>=umap[ans[j]]){
//                     temp = ans[j+1];
//                     ans[j+1] = ans[j];
//                     ans[j] = temp;
//                 } else {break;}
//             }
//         }
//         ans.pop_back();
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        vector<pair<int,int>>v;
        for(auto it : mp )
            v.push_back(make_pair(it.second,it.first));
        sort(v.rbegin(),v.rend());
        for(int i=0;i<v.size() && k!=0 ;i++)
        {
            ans.push_back(v[i].second);
            k--;
        }       
        return ans; 
    }
};