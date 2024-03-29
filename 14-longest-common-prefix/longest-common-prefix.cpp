class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string answer="";
        int smallest = strs[0].size();
        for (int i=0; i<strs.size(); i++){
            if (strs[i].size() <= smallest){
                smallest= strs[i].size();
            }
        }
        for (int j=0; j<smallest; j++){
            char check;
            for (int k=0; k<strs.size(); k++){
                check = strs[0][j];
                if (strs[k][j] != check ) {
                    check = '0';
                    break;
                }
                else if (strs[k][j] == check && k==strs.size()-1 && check!='0') {
                    answer=answer + check;
                }
            }
            if (check == '0') {
                break;
            }
        }
        return answer;
    }
};