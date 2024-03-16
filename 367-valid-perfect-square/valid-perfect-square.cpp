class Solution {
public:
    bool isPerfectSquare(int num) {
        if (sqrt(num) == floor(sqrt(num))){return true;}
        else {return false;}
        // unsigned int square;
        // if (num == 1 || num == 4){return true;}
        // else if (num < 4){return false;}
        // else{
        //     for (int i = 2; i < num/2; i++){
        //         if (i == 46341){break;}
        //         square = i*i;
        //         if (square == num){return true;}
        //         else if (square > num){break;}
        //     }
        // }
        // return false;
    }
};