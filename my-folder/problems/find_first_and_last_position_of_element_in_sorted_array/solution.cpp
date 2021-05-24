class Solution {
public:
    
    
   
 vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans(2,-1);
    if(nums.size()==0) return {-1,-1};
    int l =0;
    int r = nums.size()-1;
    while(l<r){
        int mid = l + (r-l)/2;
        if(nums[mid]<target){
            l = mid+1;
        }
        else {
            r = mid;
        }
        
    }
    if(nums[r]!=target) return ans;
    ans[0] = l;
     
    r = nums.size()-1;
    while(l<=r){
       int mid = l + (r-l)/2;
        if(target>=nums[mid]){
           l = mid+1; 
        }
        
        else {
            r = mid-1;
        }
    }
     
   
    ans[1] =r;
    return ans;
    }
};