class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        int counter = 31;
        while (n > 0){
            ans = ans + (pow(2, counter) * (n & 1));
            n = (n >> 1);
            counter--;
        }
        return ans;
    }
};