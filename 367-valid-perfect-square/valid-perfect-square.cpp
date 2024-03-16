// class Solution {
// public:
//     bool isPerfectSquare(int num) {
//         int square;
//         if (num == 1){return true;}
//         else{
//             for (int i = 2; i <= num/2; i++){
//                 if (i == 46341){break;}
//                 square = i*i;
//                 if (square == num){return true;}
//                 else if (square > num){break;}
//             }
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1){return true;}
        int left = 1;
        int right = num/2;
        long long mid;
        while (left <= right){
            mid = (left+right)/2;
            if (mid*mid == num){return true;} 
            else if (mid*mid > num){right = mid - 1;}
            else {left = mid + 1;}
        }
        return false;
    }
};