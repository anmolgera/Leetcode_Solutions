class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,vector<int>> mp;
        //mp[0] =0;
        for(int i =0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
            if((mp.find(target-nums[i])!=mp.end()) ){
                vector<int> v;
                if(mp[target-nums[i]][0]!=i){
                v.push_back(i);
                v.push_back(mp[target-nums[i]][0]);
                return v;
                }
            }
        }
        return {};
    }
};