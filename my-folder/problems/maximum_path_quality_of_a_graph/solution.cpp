class Solution {
public: 
    void dfs (vector<vector<pair<int,int>>> &ans, vector<int> & values, int &maxTime , int &res, vector<int> &visited, int node , int time, int score){
    if(time > maxTime) return;
    if(visited[node]==0){
        score += values[node];
    }    
    visited[node] +=1;   
    if(node == 0){
        res = max(res,score);
    }
    for(int i =0; i<ans[node].size(); i++){
        int next_node = ans[node][i].first;
        int t = ans[node][i].second + time;
        //time += ans[node][i].second;
        dfs(ans,values,maxTime,res,visited,next_node,t,score);
        
    }    
        
    visited[node] -=1;    
        
    }
    
    
    int maximalPathQuality(vector<int>& values, vector<vector<int>>& edges, int maxTime) {
    
    int n = values.size();
    vector<vector<pair<int,int>>> ans(n);
    int res = values[0];
    vector<int> visited(n,0);
    for(int i =0; i<edges.size(); i++){
    ans[edges[i][0]].push_back({edges[i][1],edges[i][2]});
    ans[edges[i][1]].push_back({edges[i][0],edges[i][2]});
    }
        
    dfs(ans,values,maxTime,res,visited,0,0,0);
    return res;
    }
};