class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int last = 0;
        for (auto i=1; i<intervals.size(); i++){
            if (intervals[i][0] <= intervals[last][1]){
                if(intervals[i][1] > intervals[last][1]){intervals[last][1] = intervals[i][1];}
                intervals[i] = {-1,-1};
            }
            else {last = i;}
        }
        vector<vector<int>> ans;
        for(int i = 0; i < intervals.size(); i++){
            if (intervals[i][0] != -1){ans.push_back(intervals[i]);}
        }
        return ans;
    }
};