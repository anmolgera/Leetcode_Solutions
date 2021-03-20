class Solution {
public:
    int triangleNumber(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int ans =0;
    for(int i = n-1; i>=2; i--){
     
    int l =0;
    int r =i-1;
    while(l<r){
        
        if(nums[l]+nums[r]>nums[i]){
            ans+=r-l;
            r--;
        }
        
        else {
            l++;
        }
    }
        
        
    }
    return ans;
    }
};