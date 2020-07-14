class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
        int ans =INT_MAX;
        for(int i =0; i<nums.size(); i++){
            
            int sum =0;
            
            for(int j =i; j<nums.size(); j++){
                
                sum +=nums[j];
                
                if(sum>=s){
                    
                    
                    ans = min(ans,j-i+1);
                    break;
                }
                
                
                
                
            }
            
            
            
            
            
        }
        
        
        
       return ans == INT_MAX ? 0 : ans; 
        
    }
};