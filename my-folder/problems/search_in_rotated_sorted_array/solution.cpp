class Solution {
public:
    int x;
    bool binarysearch(vector<int>&nums,int target, int l , int r){
    
        while(l<=r){
            int mid = l +(r-l)/2;
            if(nums[mid]==target){
                x = mid;
                return true;
            }
            else if(target>nums[mid]) {
                l = mid+1;
            }
            
            else {
                r = mid-1;
            }
        }
        return false;
    }
    
    int search(vector<int>& nums, int target) {
    int l =0;
    int r = nums.size()-1;
    while(l<r){
        
        int mid = l+(r-l)/2;
        if(nums[mid]>nums[r]){
            l = mid+1;
        }
        
        else {
           r = mid;
        }
        
        
    }
        
    cout<<l<<endl;
    bool flag = false;
    bool flag1 = false;
    if(target==nums[l]) return l;
    if(target>nums[l] && target<=nums[nums.size()-1]) flag = binarysearch(nums,target, l, nums.size()-1);
    else flag1 =binarysearch(nums,target, 0, l-1);
    if(flag || flag1) return x;
    else return -1;
    
        
    
        
    }
};