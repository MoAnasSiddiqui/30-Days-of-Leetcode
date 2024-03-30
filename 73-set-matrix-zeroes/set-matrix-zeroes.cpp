class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int,int> rows;
        unordered_map<int,int> cols; 
        for (auto i = 0; i<matrix.size(); i++){
            for (auto j = 0; j<matrix[0].size(); j++){
                if (matrix[i][j] == 0){
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }
        for (auto i = 0; i<matrix.size(); i++){
            for (auto j = 0; j<matrix[0].size(); j++){
                if (rows[i] == 1 || cols[j] == 1){matrix[i][j] = 0;}
            }
        }
    }
};