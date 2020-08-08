class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
    vector<int> v = nums;
    sort(v.begin(),v.end());
    
        
        vector<int> ans;
        
        
        for(int i =0; i<nums.size(); i++){
            
            auto  it = lower_bound(v.begin(),v.end(),nums[i]);
            int m = distance(v.begin(),it);
            ans.push_back(m);
            
        }
    
     return ans;   
        
    }
};