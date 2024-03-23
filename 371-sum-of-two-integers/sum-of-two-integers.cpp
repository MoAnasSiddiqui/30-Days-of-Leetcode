// class Solution {
// public:
//     int getSum(int a, int b) {
//         vector<int> values;
//         bool carry = false;
//         while (a != 0 || b != 0){
//             values.push_back(carry ^ (a & 1) ^ (b & 1));
//             if ( a & carry || b & carry || ((a & 1) && (b & 1))){
//                 carry = true;
//             } else {
//                 carry = false;
//             }
//             a=a>>1;
//             b=b>>1;
//         }
//         values.push_back(carry);
//         int answer = values.back();
//         for (int i = values.size()-2; i>=0; i--){
//             answer = answer << 1;
//             answer = answer | values[i];
//         }
//         return answer;
//     }
// };

class Solution{
public: 
    int getSum(int a, int b){
        int x_or = a ^ b;
        int carry = a & b;
        int temp;
        while (carry != 0){
            carry = (carry << 1);
            temp = x_or;
            x_or = x_or ^ carry;
            carry = temp & carry;
        } 
        return x_or;
    }
};

