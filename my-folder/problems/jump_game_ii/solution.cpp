class Solution {
public:
    int jump(vector<int>& nums) {
    
    int ans =0;
    int mx =0;
    int currmax =0;
    for(int i =0; i<nums.size()-1;i++){
        mx = max(mx,nums[i]+i);
        if(i==currmax){
            ans++;
            currmax = mx;
        }
    }
    return ans;
    }
};