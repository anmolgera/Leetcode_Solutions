class Solution {
public:
    int cnt =0;
    
   void calculate(vector<int>&nums, int i, int sum, int S){
       
       if(i==nums.size()){
           if(sum==S){
               cnt++;
           }
       }
       
       else {
           
           
           calculate(nums,i+1,sum+nums[i],S);
           calculate(nums,i+1,sum-nums[i],S);
       }
       
       
       
       
       
   } 
    
    
    
    
    int findTargetSumWays(vector<int>& nums, int S) {
        calculate(nums,0,0,S);
        return cnt;
    }
};