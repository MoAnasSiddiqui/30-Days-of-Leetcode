// #pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) 
    {
        vector<vector<int>> ans;
        int a=newInterval[0], b=newInterval[1];
        int i=0, n=intervals.size();
        
        // Insert intervals before the new interval or non-overlapping intervals
        for ( ; i < n && intervals[i][1]<a; i++) 
            ans.push_back(intervals[i]);
        
        
        // Merge overlapping intervals
        for ( ; i < n && intervals[i][0] <= b; i++) {
            a = min(a, intervals[i][0]);
            b = max(b, intervals[i][1]);    
        }
        
        ans.push_back({a, b}); // Insert the merged interval
        
        // Insert the remaining intervals
        ans.reserve(ans.size()+intervals.size()-i);
        ans.insert(ans.end(), intervals.begin()+i, intervals.end());

        return ans;
    }
};

// class Solution {
// public:
//     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//         vector<vector<int>> ans;
//         bool insert = false;
//         for (auto i : intervals){
//             if (newInterval[1] < i[0] && insert == false){
//                 ans.push_back(newInterval);
//                 ans.push_back(i);
//                 insert = true;
//             } 
//             else if(newInterval[1] >= i[0] && newInterval[1] <= i[1] && insert == false){
//                 if (newInterval[0] < i[0]){i[0] = newInterval[0];}
//                 insert = true;
//                 ans.push_back(i);
//             } 
//             else if(newInterval[0] >= i[0] && newInterval[0] <= i[1] && insert == false){
//                 if (newInterval[1] > i[1]){i[1] = newInterval[1];}
//                 insert = true;
//                 ans.push_back(i);
//             }
//             else if (i[0] >= newInterval[0] && i[1] <= newInterval[1] && insert == false){
//                 ans.push_back(newInterval);
//                 insert = true;
//             }
//             else if(insert == false){ans.push_back(i);}
//             else if (insert == true){
//                 if (i[0] <= ans.back()[1] && i[1] > ans.back()[1]){ans.back()[1] = i[1];}
//                 else if (i[0] > ans.back()[1]){ans.push_back(i);}
//             }
//         }
//         if (insert == false){ans.push_back(newInterval);}
//         return ans;
//     }
// };
// class Solution {
// public:
//     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
//         intervals.push_back(newInterval);
//         sort(intervals.begin(), intervals.end());
//         int last = 0;
//         for (auto i=1; i<intervals.size(); i++){
//             if (intervals[i][0] <= intervals[last][1]){
//                 if(intervals[i][1] > intervals[last][1]){intervals[last][1] = intervals[i][1];}
//                 intervals[i] = {-1,-1};
//             }
//             else {last = i;}
//         }
//         vector<vector<int>> ans;
//         for(int i = 0; i < intervals.size(); i++){
//             if (intervals[i][0] != -1){ans.push_back(intervals[i]);}
//         }
//         return ans;
//     }
// };