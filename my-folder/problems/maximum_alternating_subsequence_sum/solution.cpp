class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
    long long sum =0;
    int n = nums.size();    
    
    int ans =0;
    for(int i =1; i<nums.size(); i++){
        
        sum+=max(0,nums[i-1]-nums[i]);
    }
    return sum+nums.back();
        
    }
};