class Solution {
public:
    
    bool func(vector<int>&nums, int threshold, long long mid){
        
       int mx =0;
       for(int i =0; i<nums.size(); i++){
           mx+=((nums[i]+(mid-1))/mid);
           if(mx>threshold){
               return false;
           }
       }
        
    return true;
    }
    
    
    #define ll long long
    int smallestDivisor(vector<int>& nums, int threshold) {
    
       int n = nums.size();
       ll sum =0;
        for(int i =0; i<nums.size(); i++){
            sum+=nums[i];
        }
        
        ll l =1;
        ll r = sum;
        
        while(l<r){
            ll mid = l + (r-l)/2;
            if(func(nums,threshold, mid)){
                r = mid;
            }
            
            else {
                l = mid+1;
            }
        }
        
       return l; 
    }
};