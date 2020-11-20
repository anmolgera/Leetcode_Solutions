class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
      map<int,int> mp;
        
      mp[0] =1;
      int sum =0;
      int count =0;
      for(int i =0; i<nums.size(); i++){
          sum+=nums[i];
          count+=mp[sum-k];
          mp[sum]++;
          
          
      }
        
        return count;
        
        
    }
};