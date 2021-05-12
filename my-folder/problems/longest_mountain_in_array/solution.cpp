class Solution {
public:
    int longestMountain(vector<int>& nums) {
    
    int n = nums.size();
    vector<int> up(n,0);
    vector<int> down(n,0);
        
    for(int i =1; i<n; i++){
        if(nums[i]>nums[i-1]){
            up[i] = up[i-1]+1;
        }
        else up[i] =0;
    }
        
    for(int i=n-2; i>=0; i--){
        if(nums[i]>nums[i+1]){
            down[i] = down[i+1]+1;
        }
        else down[i] =0;
    }
    int mx =0;
    for(int i =0; i<n; i++){
        if(up[i]>0 && down[i]>0)
        mx = max(mx,up[i]+down[i]+1);
    }
    if(mx<3) return 0;
    return mx;
    }
};