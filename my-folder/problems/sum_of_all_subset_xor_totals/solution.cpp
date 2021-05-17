class Solution {
public:
    
    int helper(vector<int>&nums, int s, int res, int i){
        
        if(i>=nums.size()){
            res+=s;
            return res;
        }
        
       
      int x = helper(nums,s^nums[i],res,i+1);
      int y = helper(nums,s,res,i+1);
      return x+y;  
        
    }
    
    
    
    
    int subsetXORSum(vector<int>& nums) {
    int result =0;
    result = helper(nums,0,0,0);
    return result;
    }
};