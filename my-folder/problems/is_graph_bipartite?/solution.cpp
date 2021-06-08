class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> color(n,0);
    queue<int> q;
    for(int i =0; i<n; i++){
        if(color[i]) continue;
        
        color[i] =1;
        q.push(i);
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            for(int j =0; j<graph[p].size(); j++){
                int x = graph[p][j];
                if(color[x]==0){
                    
                    color[x] = -color[p];
                    q.push(x);
                    
                }
                else if(color[x]!=color[p]) continue;
                else return false;
            }
            
        }
        
    }
    return true;
    }
};