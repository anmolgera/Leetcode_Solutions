class Solution {
public:
    
    int check(vector<int> &nums, int s , int e){
      
      if(s==e){
          return nums[e];
      }
        
        
      int a = nums[s] - check(nums,s+1,e);
      int b = nums[e] - check(nums,s,e-1);
        
      return max(a,b);
      
       
    }
    
    
    
    
    bool PredictTheWinner(vector<int>& nums) {
         
        
        return check(nums,0,nums.size()-1)>=0;     

        

    }
};