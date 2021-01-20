class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        vector<int> dp(nums.size());
        multiset<int> m;
        m.insert(0);
        for(int i =0; i<nums.size(); i++){
            dp[i] = nums[i] + *m.rbegin();
            m.insert(dp[i]);
            if(i>=k){
                m.erase(m.find((dp[i-k])));
            }
            
        }
        
        return *max_element(dp.begin(),dp.end());
    }
};