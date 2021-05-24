class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
    int i =0;
    int j =0;
    
    int s = nums.size();
    int sum =0;
    int mn_len = INT_MAX;
    while(j<s){
        sum+=nums[j];
        j++;
       
            while(sum>=target){
               mn_len = min(mn_len,j-i);
               sum-=nums[i];
               i++;
            }
      
    }
        
    return mn_len==INT_MAX ? 0 : mn_len;    
    }
};