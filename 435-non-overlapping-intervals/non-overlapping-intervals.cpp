// class Solution {
// public:
//     int eraseOverlapIntervals(vector<vector<int>>& intervals) {
//         sort(intervals.begin(), intervals.end());
//         int last = (intervals.size())-1;
//         int ans = 0;
//         int size = intervals.size()-2;
//         for (auto i = size; i>=0; i--){
//             if (intervals[i][1] > intervals[last][0]){ans ++;}
//             else{last = i;}
//         }
//         return ans;
//     }
// };
class Solution {
public:
    static bool solve(vector<int>&a , vector<int> &b){return a[1] < b[1];}
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),solve);
        int ans = 0;
        int last = 0;
        for (int i = 1; i<intervals.size(); i++){
            if (intervals[i][0] < intervals[last][1]){ans ++;}
            else{last = i;}
        }
        return ans;
    }
};