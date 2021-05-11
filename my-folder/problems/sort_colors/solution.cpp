class Solution {
public:
    void sortColors(vector<int>& nums) {
     int cnt=0;
   int cnt1 =0;
   int cnt2 =0;
    int numsSize = nums.size();

   for(int i =0; i<numsSize; i++){
       if(nums[i]==0){
           cnt++;
       }

       else if(nums[i]==1){
           cnt1++;
       }

       else cnt2++;
   }

   for(int i =0; i<numsSize; i++){
       if(cnt){
           nums[i] = 0;
           cnt--;
       }

       else if(cnt1){
           nums[i] =1;
           cnt1--;
       }

       else nums[i] =2;
   }


    
    }
};