class Solution {
public:
    int findMin(vector<int>& nums) {
        int li =0;
        int hi = nums.size()-1;
        
        while(li<hi){
            
            int mid = li + (hi-li)/2;
            if(nums[hi]>nums[mid]){
                hi = mid;
            }
            
            else {
                
                li = mid+1;
            }
            
            
            
        }
        return nums[hi];
        
        
        
        
    }
};