class Solution {
public:
    int longestSubsequence(vector<int>& nums, int d) {
    unordered_map<int,int> mp;
    //mp[0]=1;
    int mx =1;
    for(int i =0; i<nums.size(); i++){
       mp[nums[i]] = 1+mp[nums[i]-d];
       mx = max(mx,mp[nums[i]]);
    }
    return mx;
    }
};