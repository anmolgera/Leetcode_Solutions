class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        
        if(nums.size()<3){
            
            return 0;
        }
        
        
        sort(nums.begin(),nums.end());
        int min = INT_MAX;
        int ans =0;
        
        
        for(int i =0; i<nums.size()-2; i++){
            
            
            int start = i+1;
            int end = nums.size()-1;
            
            
            while(start<end){
                
                int sum = nums[start]+nums[i]+nums[end];
                if(abs(sum-target)<min){
                  ans = sum;
                    
                    min = abs(sum-target);
                           
                }
                
               if (sum>target){
                   
                   end--;
               }
                
            else if(sum<target){
                
                start++;
            }
                
       else if(sum==target){
           
          ans = sum;
           i = nums.size()-2;
           break;
           
           
       }   
                
                
            }
            
            
            
            
            
        }
        
        
        
        
        
    return ans;    
        
        
        
        
    }
};