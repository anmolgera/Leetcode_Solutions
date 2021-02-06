class Solution {
public:
    int minOperations(vector<int>& nums) {
           int res =0;
           int mx =1;
           
           for(int i =0; i<nums.size(); i++){
               int a = nums[i];
               int x =0;
               while(a){
                   if(a&1){
                     res+=1;  
                   }
                   
                   a>>=1;
                   x++;
               }
               
               mx = max(mx,x);
           }
        return mx + res -1;
        
    }
};