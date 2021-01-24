class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans =0;
       for(int i =0; i<32; i++){
           int sum =0;
           for(int j =0; j<nums.size(); j++){
               
               if(((1<<i) & nums[j])){
                   sum++;
               }
               
               
           }
           sum%=3;
           if(sum!=0) ans|=sum<<i;
           
       }
        return ans;
    }
};