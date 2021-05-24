class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
    int target =0;
    int sum =0;
    for(int i =0; i<nums.size(); i++){
        sum+=nums[i];
    }
    
    target = sum-x;
    sum =0;
    
    unordered_map<int,int> mp;
    int max_len = INT_MIN;
    for(int i =0; i<nums.size(); i++){
        
        sum+=nums[i];
        if(sum==target){
         max_len = i+1;    
        }
        
        if(mp.find(sum)==mp.end()){
            mp[sum] =i;
        }
        
        if(mp.find(sum-target)!=mp.end()){
           max_len = max(max_len,i-mp[sum-target]);
        }
        
        
    }
    if(max_len==INT_MIN) return -1;    
    else return nums.size()- max_len;
    
    }
};