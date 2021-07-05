class Solution {
public:
    bool canJump(vector<int>& nums) {
    int n = nums.size();
    vector<int> dp(n,false);
    dp[n-1] = true;
    int end = n-1;
    for(int i = n-2; i>=0; i--){
        if(i+nums[i]>=end){
            dp[i] = true;
            end = i;
        }
    }
    
    return dp[0];
    }
};