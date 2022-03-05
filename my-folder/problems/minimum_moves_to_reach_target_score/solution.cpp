class Solution {
public:
    int minMoves(int target, int k) {
     int res = 0;
        while (target > 1 && k > 0) {   
            res += 1 + target % 2;
            k--;
            target >>= 1;
        }
        return target - 1 + res;   
    }
};