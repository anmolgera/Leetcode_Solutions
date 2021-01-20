class Solution {
public:
    int findMin(vector<int>& nums) {
        int low =0;
        int hi =nums.size()-1;
        while(low<hi){
            
            int mid = low + (hi-low)/2;
            if(nums[hi]>nums[mid]){
                hi = mid;
            }
            
            else if(nums[hi] < nums[mid] ) low = mid+1;
            else hi--;
            
            
        }
        
        return nums[low];
    }
};