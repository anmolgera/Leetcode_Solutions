class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int inc =1;
        int dec =1;
        int res =1;
        if(nums.size()==0){
            return 0;
        }
        for(int i =1; i<nums.size(); i++){
            
            if(nums[i]>nums[i-1]){
                
                inc = dec+1;
               // dec =1;
            }
            
            else if(nums[i]<nums[i-1]){
                dec =  inc+1;
                //inc =1;
            }
            
           /* else {
                
                inc =1;
                dec =1;
            }
            */
            
         res = max({res,inc,dec});   
            
            
            
        }
        return res;
    }
};