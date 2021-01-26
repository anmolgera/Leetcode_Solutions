class Solution {
public:
    int trailingZeroes(int n) {
        int div =5;
        int count =0;
        while(n/div>0){
            count+=n/div;
            div*=5;
        }
        return count;
    }
};