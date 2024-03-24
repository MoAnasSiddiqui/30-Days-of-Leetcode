class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int ans = 0;
        int last = 0;
        for (int i = 1; i<intervals.size(); i++){
            if (intervals[i][0] < intervals[last][1]){ans ++;}
            else{last = i;}
        }
        int ans2 = 0;
        last = (intervals.size())-1;
        int size = intervals.size()-2;
        for (auto i = size; i>=0; i--){
            if (intervals[i][1] > intervals[last][0]){ans2 ++;}
            else{last = i;}
        }
        return min(ans,ans2);
    }
};