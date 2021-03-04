class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         map<int,int> mp;
        map<int,int> mp1;
        for(auto i : nums1){
            mp[i]++;
        }
        
        for(auto i : nums2){
            mp1[i]++;
        }
        
        vector<int> v;
        for(auto i : mp1){
            if(mp.find(i.first)!=mp.end()){
                int m = min(i.second,mp[i.first]);
                for(int j =0; j<m; j++){
                    v.push_back(i.first);
                }
            }
        }
        return v;
    }
};