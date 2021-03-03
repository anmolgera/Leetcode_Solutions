class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int ele = nums[0];
     int cnt =1;
     for(int i =1; i<nums.size(); i++){
     
      if(cnt ==0){
          ele = nums[i];
          cnt+=1;
      }   
         
      else if(nums[i]==ele){
          cnt++;
      }
         
      else cnt--;
         
         
     }
    return ele;
    }
};