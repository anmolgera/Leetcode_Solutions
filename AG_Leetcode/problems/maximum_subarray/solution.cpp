class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum =0;
        int max_sum=0;
        
        if(nums.size()==1){
            return nums[0];
        }
        
        bool status =  false;
        
        for(int i =0; i<nums.size(); i++){
            
            
            
            if(nums[i]>=0){
                status = true;
                
            }
        }
        
        
        if(status){
        
        for(int i =0; i<nums.size(); i++){
            
            sum+=nums[i];
            
            if(sum<0){
                
                sum =0;
            }
            
            
            if(sum > max_sum){
                
                max_sum = sum;
            }
            
            
        }
        
        return max_sum;
        
        }
        
        else {
            
            int min1 = INT_MIN;
            
            for(int i =0; i<nums.size(); i++){
             min1 = max(min1,nums[i]);
                
            }
            
            
            return min1;
            
            
        }
        
        
        
    }
};