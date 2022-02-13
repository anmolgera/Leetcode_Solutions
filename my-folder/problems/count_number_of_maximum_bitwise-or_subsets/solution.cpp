class Solution {
public:
    int dp[17][156000];
    
    int recur (vector<int>&nums, int n, int sum, int index, int a){
        
    if(index == n ) {
        
        if(sum  == a) return 1;
        else return 0;
    }
    if(dp[index][sum]!= -1) return dp[index][sum];
    
    return dp[index][sum] = recur(nums,n,sum | nums[index], index+1,a) + recur(nums,n,sum, index+1,a);
    
        
    }
    
    int countMaxOrSubsets(vector<int>& nums) {
    int n = nums.size();
    int mx = 1<<17;
    
    memset(dp,-1,sizeof(dp));
    int sum =0;
    int a =0;
    for(auto i : nums) a |= i;
    recur(nums, n, sum, 0, a);
    
    return dp[0][0];
        
    //return 0;
    
    }
};