class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
         vector<int> ret(2,0);
        int tmp = 0;
        for(auto x : nums) {
            tmp  ^= x;
        }
        tmp = tmp&(-tmp);
        for(auto x: nums) {
            if(x&tmp) {
                ret[0] ^= x;
            } else {
                ret[1] ^= x;
            }
        }
        return ret; 
    }
};