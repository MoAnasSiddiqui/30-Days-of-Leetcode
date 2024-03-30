class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool flag_row = false;
        bool flag_col = false;
        for (auto i = 0; i<matrix.size(); i++){
            if (matrix[i][0] == 0){flag_col = true;}
            for (auto j = 0; j<matrix[0].size(); j++){
                if (i == 0 && matrix[i][j] == 0){flag_row = true;}
                if (matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for (auto i = 1; i<matrix.size(); i++){
            if (matrix[i][0] == 0){
                for (auto j = 1; j<matrix[0].size(); j++){
                    matrix[i][j] = 0;
                }
            }
        }
        for (auto j = 1; j<matrix[0].size(); j++){
            if (matrix[0][j] == 0){
                for (auto i = 1; i<matrix.size(); i++){
                    matrix[i][j] = 0;
                }
            }
        }
        if (flag_row == true){
            for (int i = 0; i<matrix[0].size(); i++){
                matrix[0][i] = 0;
            }
        }
        if (flag_col == true){
            for (int i = 0; i<matrix.size(); i++){
                matrix[i][0] = 0;
            }
        }
    }
};