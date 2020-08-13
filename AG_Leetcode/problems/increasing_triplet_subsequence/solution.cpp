class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
    
        
        if(nums.size()<3){
            
            return false;
        }
        int n = nums.size();
        
        vector<int> dp(n,1);
        
        
        for(int i =1; i<n; i++){
            
            for(int j =0; j<i; j++){
                
                
                if(nums[i]>nums[j]){
                    
                    dp[i] = max(dp[i],dp[j]+1);
                }     
            }
            
            
        }
        
        
        for(int i =0; i<n; i++){
            if(dp[i]>=3){
                
                return true;
            }       
        }
      return false;
        
    }
};