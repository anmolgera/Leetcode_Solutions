class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        map<int,int> mp;
        for(int i =0; i<nums.size(); i++){
            
            mp[nums[i]]++;
            
            
        }
        
        vector<pair<int,int>> v;
        vector<int> res;
        
        for(auto i : mp){
            v.push_back({i.second,i.first});
        }
        
       priority_queue<pair<int,int>> pq;
       
       for(int i =0; i<v.size(); i++){
           pq.push(v[i]);
       }
        
       int sum =0;
        for(int i =0; i<k; i++){
            auto x = pq.top();
            pq.pop();
            res.push_back(x.second);
        }
        return res;
    }
};