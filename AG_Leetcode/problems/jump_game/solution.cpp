class Solution {
public:
    bool canJump(vector<int>& nums) {
    int goodindex = nums.size()-1;  
    for(int i =nums.size()-1; i>=0; i--){
        
        if(i+nums[i]>=goodindex){
            
            goodindex =i;
        }
        
        
        
        
    }
    
        
        if(goodindex ==0){
            
            return true;
        }
       return false; 
        
    }
};