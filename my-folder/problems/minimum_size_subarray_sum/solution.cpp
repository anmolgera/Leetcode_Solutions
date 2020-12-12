class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        
     int l =0;
     int ans = INT_MAX;
     int sum =0;
     for(int r =0; r<nums.size(); r++){
         
         sum+=nums[r];
         while(sum>=s){
             ans = min(ans,r-l+1);
             sum-=nums[l];
             l++;
         }
         
     }
        if(ans==INT_MAX) return 0;
        else return ans;
    }
};