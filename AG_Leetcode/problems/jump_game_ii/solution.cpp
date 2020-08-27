class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n = nums.size(), start =0, end =0, max_end =0,step =0;
        
        while(end<n-1){
            
            step++;
            max_end = end+1;
            
            for(int i = start; i<=end; i++){
            if(nums[i]+i >=n-1) return step;    
            max_end = max(max_end, nums[i]+i);
                
                
            }
            
            start = end+1;
            end = max_end;            
            
            
            
        }
        
        
        
        
        
      //  for(int )
        
     return step;   
        
        
        
    }
};