class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    map<int,vector<int>> mp;
    for(int i =0; i<nums.size(); i++){
        mp[nums[i]].push_back(i);
    }
        
    for(auto i : mp){
      vector<int> v = i.second;
      if(v.size()<=1){
          continue;
      }
     for(int j =0; j<v.size()-1; j++){
        for(int m = j+1; m<v.size(); m++){
            if(v[m]-v[j]<=k){
                return true;
            }
        } 
         
     }
    }
    return false;
    }
};