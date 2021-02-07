class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
       int x =0;
       int i;
       for(i =0; i<nums.size(); i++){
           x = x^i^nums[i];
       }
        
       return x^i;
        
        
    }
};