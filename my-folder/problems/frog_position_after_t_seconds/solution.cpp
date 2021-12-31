class Solution {
public:
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
    
    vector <double> prob(n+1,0);
    vector <int> vis (n+1,0);
    vector<vector<int>> graph(n+1);
    
    for(int i =0; i<edges.size(); i++){
    
    graph[edges[i][0]].push_back(edges[i][1]);     
    graph[edges[i][1]].push_back(edges[i][0]); 
        
    }
    queue<int> q;
    q.push(1);
    prob[1] = 1.0;
    vis[1] =1;
    while(!q.empty() && t--){
        int s = q.size();
        while(s--){
            
        auto i = q.front();
        q.pop();
        
        double adj_edges =0;
        for(int j =0; j<graph[i].size(); j++){
            int k = graph[i][j];
            if(vis[k]==0){
                adj_edges++;
            }
            
        }
         
        for(int j =0; j<graph[i].size(); j++){
            int k = graph[i][j];
            if(vis[k]==0){
                q.push(k);
                prob[k] = prob[i]/adj_edges;
            }
            vis[k] =1;
        }
        if(adj_edges > 0){
            prob[i] = 0;
        }    
        }
        
    }
    return prob[target];
    }
};