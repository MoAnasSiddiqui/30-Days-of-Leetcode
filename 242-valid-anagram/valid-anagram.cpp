class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()){return false;}
        unordered_map<char,int> umap;
        for(auto i: s){
            umap[i]++;
        }
        for (auto i: t){
            if (umap[i] == 0){return false;}
            else {umap[i] = umap[i]-1;}
        } 
        return true;
    }
};