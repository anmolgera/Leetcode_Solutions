class Solution {
public:
    
    void dfs(int node, vector<vector<int>>&adj, vector<int> &vis){
        
        vis[node] =1;
        
        for(auto i : adj[node]){
            
            if(!vis[i]){
                dfs(i,adj,vis);
            }
            
        }
        
        
    }
    
    
    
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        if(connections.size()<n-1){
            return -1;
        }
        
        vector<vector<int>> adj(n);
        
        for(int i =0; i<connections.size(); i++){
            
           adj[connections[i][0]].push_back(connections[i][1]);
           adj[connections[i][1]].push_back(connections[i][0]);
            
            
        }
        int cnt =0;
        vector<int> vis(n,0);
        for(int i =0; i<n; i++){
            
            if(!vis[i]){
            dfs(i,adj,vis);
             cnt++;
                }
           
        }
        
        return cnt-1;
        
        
    }
};