class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        
      int bp =1;
      int fp =1;
        
      int ans = INT_MIN;
        
        int n = nums.size();
        
       for(int i =0; i<nums.size(); i++){
           
           
           fp = fp*nums[i];
           bp = bp*nums[n-i-1];
           
           
                ans = max(ans,max(fp,bp));   
           
           if(fp==0){
               
               fp=1;
               
           }
           
        
              
           if(bp==0){
               
               bp=1;
               
           }
           
        
           
           
   
           
           
           
           
       }
        
     return ans;   
        
    }
};