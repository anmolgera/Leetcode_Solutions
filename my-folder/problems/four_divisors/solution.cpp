class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
    int sum =0;
    for(int i =0; i<nums.size(); i++){
        
        int ch =0;
        for(int j = 2; j*j<=nums[i]; j++){
            
            
            if(nums[i]%j==0 ){
                
                if(ch==0){
                    ch = j;
                }
                
                else {
                    ch =0;
                    break;
                }
                
            }
        }
        
        if(ch>0 && nums[i]/ch!=ch){
         sum+=(1+nums[i]+ch+nums[i]/ch);   
        }
        
        
    } 
    return sum;
    }
};