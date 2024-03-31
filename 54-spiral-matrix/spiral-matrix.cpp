class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        bool dir = true;
        int row = 0;
        int col = 0;
        vector<int> ans;

        while (ans.size() != matrix.size()*matrix[0].size()){
            if (dir == true){
                while (col < matrix[0].size() && matrix[row][col] != INT_MAX){
                    ans.push_back(matrix[row][col]);
                    matrix[row][col] = INT_MAX;
                    col++;
                }
                
                col--;
                row++;
                while (row < matrix.size() && matrix[row][col] != INT_MAX){
                    ans.push_back(matrix[row][col]);
                    matrix[row][col] = INT_MAX;
                    row++;
                }
                row--;
                col--;
                dir = false;
            } else {
                while (col >= 0 && matrix[row][col] != INT_MAX){
                    ans.push_back(matrix[row][col]);
                    matrix[row][col] = INT_MAX;
                    col--;
                }
                col++;
                row--;
                while (row >= 0 && matrix[row][col] != INT_MAX){
                    ans.push_back(matrix[row][col]);
                    matrix[row][col] = INT_MAX;
                    row--;
                }
                row++;
                col++;
                dir = true;
            }
        }
        return ans;
    }
};