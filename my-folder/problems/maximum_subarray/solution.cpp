class Solution {
public:
    
    
    int maxSubArray(vector<int>&nums, int l, int r){
        
        if(l>r){
            return INT_MIN;
        }
        
        int m = l + (r-l)/2;
        int ml =0;
        int mr =0;
        
        int lmax = maxSubArray(nums,l,m-1);
        int rmax = maxSubArray(nums,m+1,r);
        
        for(int i =m-1, s =0; i>=0;i--){
            s+=nums[i];
            ml = max(ml,s);
        }
        
        for(int i =m+1,s=0; i<=r; i++){
            s+=nums[i];
            mr = max(mr,s);
        }
      return max(max(lmax,rmax), ml+mr+nums[m]);  
        
    }
    
    
    
    
    int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    return maxSubArray(nums,0,n-1);
    }
};