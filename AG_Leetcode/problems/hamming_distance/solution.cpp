class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y;
        int s =0;
        while(n){
            s += n&1;
            n = n>>1;
            
        }
        
        return s;
    }
};