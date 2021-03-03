class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
    int n = nums.size();
    if(n==0){
        return n;
    }
    int ans =1;
    int mx =1;
    for(int i =1; i<nums.size(); i++){
        if(nums[i]>nums[i-1]){
            ans++;
            mx = max(mx,ans);
        }
        
        else {
            ans =1;
        }
    }
        return mx;
    }
};