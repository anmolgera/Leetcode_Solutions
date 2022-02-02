class Solution {
public:
    int rob(vector<int>& nums) {
    int mx1 =0;
    int mx2 =0;
    int n = nums.size();
    vector<int> dp(n,0);
    if(n==1) return nums[0];
    dp[0] = nums[0];
    dp[1] = max(nums[0],nums[1]);
    
    for(int i =2; i<n-1; i++) {
        
        dp[i] = max(dp[i-2] + nums[i], dp[i-1]);
    }
    
    mx1 =  *max_element(dp.begin(), dp.end()); 
    
    for(int i =0; i<n; i++) dp[i] = 0;
    dp[1] = nums[1];
    if( n > 2 ) dp[2] = max(nums[1], nums[2]);
    for(int i = 3; i<nums.size(); i++){
    dp[i] = max(dp[i-2] + nums[i], dp[i-1]);    
        
    }
    mx2 = *max_element(dp.begin(), dp.end());
    return max(mx1, mx2);
    } 
};