class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size()==0){
            
            return 0;
        }
        
        if(nums.size()==1){
            
            return nums[0];
        }
        
        int sum1= 0;
        int sum2 =0;
        
        int mx1 =0 ,mx2 =0;
        
        
        for(int i =0; i<nums.size()-1; i++){
            
            if(i%2){
              sum1 = max(sum1+nums[i],sum2);  
                
                
            }
            
            
            else {
                
                sum2 = max(sum1, sum2+nums[i]);
            }
            
        }        
        
        mx1 = max(sum1,sum2);
        
        sum1 =0,sum2 =0;
        
         for(int i =1; i<nums.size(); i++){
            
            if(i%2){
              sum1 = max(sum1+nums[i],sum2);  
                
                
            }
            
            
            else {
                
                sum2 = max(sum1, sum2+nums[i]);
            }
            
        }    
        
        mx2 = max(sum1,sum2);
        
        return max(mx1,mx2);
        
        
        
        
        
        
        
        
    }
};