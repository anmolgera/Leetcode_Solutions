class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();
        
     map<string,vector<string>>mp;
        
        vector<vector<string>>v;
        
        
        for(int i =0; i<n; i++){
            
          string s = strs[i];
            
            sort(s.begin(),s.end());
            
            mp[s].push_back(strs[i]);
            
            
            
            
        }
        
        
        
        for(auto i = mp.begin(); i!=mp.end(); i++){
            
            vector<string > v2 = i->second;
            v.push_back(v2);
            
            
        }
     
       return v; 
        
    }
};