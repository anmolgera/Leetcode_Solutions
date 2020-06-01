class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        
       
        int n = nums.size();
        
        int sum =0;
        int mx =0;
        
        int flag =0;
        for(int i =0; i<n; i++){
            
            if(nums[i]>=0){
                
                
                flag =1;
                
                
            }
            
            
            
            
            
        }
        
        
        if(flag ==0){
            
            int mn = INT_MIN;
            for(int i =0; i<n; i++){
                
                if(nums[i]>mn){
                    
                    mn = nums[i];
                }
                
                
            }
            
            
            
          return mn;  
            
        }
        
       
        
        
        
        
        
        for(int i =0; i<n; i++){
            
            
            if(nums[i] + sum >=0){
                
                
                sum +=nums[i];
                
                if(sum>mx){
                    
                    mx = sum;
                }
                
                
                
            }
            
            
            else if(nums[i] + sum <0){
                
                
                sum = 0;
            }
            
            
            
            
            
        }
        
        
        
        
        
        
        
        
        
        
        
    return mx;    
        
        
    }
};