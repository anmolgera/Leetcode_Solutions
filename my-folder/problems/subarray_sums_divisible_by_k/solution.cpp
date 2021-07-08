class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    map<int,int> mp;
    int sum =0;
    int count =0;
    mp[0] =1;
    for(int i =0 ; i<nums.size(); i++){
        
    sum = (sum + (nums[i]+k)%k + k);
    
    
    count += mp[sum%k];
    mp[sum%k]++;
    
        
    }   
    return count;
        
    }
};