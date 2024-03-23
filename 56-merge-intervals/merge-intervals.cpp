class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        for (auto i=1; i<intervals.size(); i++){
            if (intervals[i][0] <= intervals[i-1][1]){
                if(intervals[i][1] > intervals[i-1][1]){intervals[i-1][1] = intervals[i][1];}
                intervals.erase(intervals.begin()+i);
                i--;
            }
        }
        return intervals;
    }
};