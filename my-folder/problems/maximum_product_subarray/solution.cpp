class Solution {
public:
  
    int maxProduct(vector<int>& nums) {
    
    int mx =0;  
    int mn =0;
    int n = nums.size();
    if(n==1) return nums[0];
    int res = INT_MIN;
    for(int i =0; i<nums.size(); i++){
    if(nums[i]<0){
        
        swap(mx,mn);
    }    
        
    mx = max(nums[i],mx*nums[i]);
    mn = min(nums[i],mn*nums[i]);
    res = max(res,mx);
        
        
    }
    return res;
        
    }
};