// class Solution {
// public:
//     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//         vector<vector<int>> ans;
//         bool insert = false;
//         for (auto i : intervals){
//             if (i[0] insert == false){
//             }
            
//             // if (newInterval[0] <= intervals[i][1] && last == false){
//             //     if (intervals[i][0] > newInterval[0]){intervals[i][0] = newInterval[0];}
//             //     if (intervals[i][1] < newInterval[1]){intervals[i][1] = newInterval[1];}
//             //     ans.push_back(intervals[i]);
//             //     last = true;
//             // }
//             // else if (last == true){
//             //     if (intervals[i][0] <= ans.back()[1] && intervals[i][1] >= ans.back()[1]){ans.back()[1] = intervals[i][1];}
//             //     else if (intervals[i][0] > ans.back()[1]){ans.push_back(intervals[i]);}
//             // }
//             // else {ans.push_back(intervals[i]);}
//         }
//         for (auto i: intervals){
//             cout << i[0] << ":" << i[1] << " ";
//         }
//         if (intervals.size() == 0){ans.push_back(newInterval);}
//         return ans;
//     }
// };
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
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