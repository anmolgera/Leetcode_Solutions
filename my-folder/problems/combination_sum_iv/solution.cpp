class Solution {
public:
    
    const int mod = 1e9+7;
    int combinationSum4(vector<int>& nums, int target) {
    int n =  nums.size();
    vector<unsigned long long > dp(target+1,0);
    dp[0] =1;
    for(int i =1; i<=target; i++){
        for(int j =0; j<nums.size(); j++){
            
            if(i>=nums[j]){
                dp[i]= (dp[i] + dp[i-nums[j]]);
              
            }
        }
        
    }    
    return dp[target];
    }
};