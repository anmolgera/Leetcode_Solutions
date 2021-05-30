class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
     
    int n = nums.size();
    vector<int> lis;
    for(int i =0; i<n; i++){
    
    auto it = lower_bound(lis.begin(),lis.end(),nums[i]);
    if(it == lis.end()){
        lis.push_back(nums[i]);
    }
    else *it = nums[i];
        
    }
        
    return lis.size();
    
    }
};