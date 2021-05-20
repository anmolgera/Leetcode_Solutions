class Solution {
public:
    
    bool ispos(vector<int>&nums, int m, int upperlimit ){
        
     int sum =0;
     int cnt =1;
     for(int i =0; i<nums.size(); i++){
         
         sum+=nums[i];
         if(sum>upperlimit){
             sum = nums[i];
             cnt++;
         }
         
         if(cnt>m){
             return false;
         }
         
     }
        
        
      return true;  
        
        
    }
    
    
    int splitArray(vector<int>& nums, int m) {
    
    int right =0;
    int left = 0;
    for(int i =0; i<nums.size(); i++){
        right +=nums[i];
        left = max(left, nums[i]);
    }
        
    while(left<right){
        int mid = left + (right-left)/2;
        if(ispos(nums,m,mid)){
            right = mid;
        }
        
        else{
            left = mid+1;
        }
        
    }
        
        
    return left;
        
    }
};