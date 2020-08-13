class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        
       if(nums.size()==0){
           
           return 0;
         }
        
        int n = nums.size();
       vector<int> count(n,1),len(n,1);
        
    
        for(int i =1; i<n  ; i++){
            
            for(int j =0; j<i; j++){
                
                if(nums[i]>nums[j]){
                    
                    if(len[j]+1>len[i]){
                        len[i] = len[j]+1;
                        count[i] = count[j];
                        
                        
                    }
                    
                    else if(len[j]+1==len[i]){
                        
                        
                        count[i]+=count[j];
                    }
                    
                    
                }
                
                
                
                
            }
            
            
        }
        
      int max_len =0;
      for(int i =0; i<n; i++){
        if(len[i]>max_len){
            
            max_len =len[i] ;
        } 
          
      }
      int ans =0;  
      for(int j =0; j<n; j++){
          
         if(len[j]==max_len){
             
             ans+=count[j];
         } 
          
          
      }
    return ans;    
        
    }
};