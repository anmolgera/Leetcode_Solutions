class Solution {
public:
    
    
    void dfs(int start,  map<int,vector<int>> &mp,   vector<int> &v, map<int,int>& vis){
        
        
        vis[start]=1;
        for(int i =0; i<mp[start].size(); i++){
            if(vis[mp[start][i]]==0){
                v.push_back(mp[start][i]);
                dfs(mp[start][i],mp,v,vis);
            }
        }
        
        return;
        
        
}
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        
     map<int,vector<int>> mp;
     for(int i =0; i<adjacentPairs.size(); i++){
         
         mp[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
         mp[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
         
     }
        
        vector<int> v;
        
        
        map<int,int> vis;
        
        int first;
        
        for(auto i : mp){
            if(i.second.size()==1){
                first = i.first;
                break;
            }
        }
        
        v.push_back(first);
        dfs(first,mp,v,vis);
        
        return v;
        
        
    }
};