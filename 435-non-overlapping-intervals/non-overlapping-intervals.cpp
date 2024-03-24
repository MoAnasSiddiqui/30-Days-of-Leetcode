class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int last = (intervals.size())-1;
        int ans = 0;
        int size = intervals.size()-2;
        for (auto i = size; i>=0; i--){
            if (intervals[i][1] > intervals[last][0]){ans ++;}
            else{last = i;}
        }
        return ans;
    }
};