class Solution {
public:
    
    
    int maxSubArray(vector<int>&nums, int l, int r){
        
        if(l>r){
            return INT_MIN;
        }
                                // left
                               // right
                               // a[mid] 
        
        int m = l + (r-l)/2;
        int pml =0;
        int pmr =0;
        
        int lmax = maxSubArray(nums,l,m-1);
        int rmax = maxSubArray(nums,m+1,r);
        
        for(int i =m-1, s =0; i>=l;i--){
            s+=nums[i];
            pml = max(pml,s);
        }
        
        for(int i =m+1,s=0; i<=r; i++){
            s+=nums[i];
            pmr = max(pmr,s);
        }
      return max(max(lmax,rmax), pml+pmr+nums[m]);  
        
    }
    
    
    
    
    int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    return maxSubArray(nums,0,n-1);
    }
};