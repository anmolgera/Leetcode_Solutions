class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
      int n = nums.size();
      vector<int> dp(100002,0);
      vector<int> freq(100001,0);
      int mx = 0;
      for(int i =0; i<n; i++){
            freq[nums[i]]++;
            mx = max(mx,nums[i]);
      }
      dp[0] =0*freq[0];
      dp[1] = 1*freq[1];
      for(int i =2; i<=10001; i++){
            dp[i] = max(dp[i-2] + i*freq[i],dp[i-1]);
       }
       return dp[mx];     
    }
};