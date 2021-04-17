class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
    int x = pow(2,maximumBit);
        x--;
        
        
    int n = nums.size();
    vector<int> ans(n,0);
    int xo =0;
    for(int i : nums){
        xo^=i;
    }
    
        
    int y = x;
    ans[n-1] = y^xo;
    for(int i = nums.size()-2; i>=0; i--){
        
    ans[i] = x^nums[i+1]^xo;
    xo^=nums[i+1];
    
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};