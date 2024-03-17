class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer = {{1}}; 
        if (numRows == 1){return answer;}
        else {
            for (auto i = 2; i <= numRows; i++){
                vector<int> previous = answer[answer.size()-1];
                vector<int> current = {1};
                for (auto j=1; j<previous.size(); j++){current.push_back(previous[j]+previous[j-1]);}
                current.push_back(1);
                answer.push_back(current);
            }
        }
        return answer;
    }
};