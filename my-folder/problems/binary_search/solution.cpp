class Solution {
public:
    int search(vector<int>& nums, int target) {
    int l =0;
    int e = nums.size()-1;
          
       while(l<=e){
           
           
           int mid = l+ (e-l)/2;
           if(nums[mid]==target){
               return mid;
           }
           
          if(target > nums[mid]){
              
              l = mid+1;
          } 
           
         else e = mid-1;  
           
           
       }
       
       return -1;    
    }
};