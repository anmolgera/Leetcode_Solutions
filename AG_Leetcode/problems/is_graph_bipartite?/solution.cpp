class Solution {
public:
    bool isvalid(vector<vector<int>>&graph, int col , int node,vector<int>&color){
        
        if(color[node]!=0){
            return color[node]==col;
        }
        
        color[node] = col;
        
        
        for(int i : graph[node]){
            
            if(!isvalid(graph,-col,i,color)){
                return false;
            }
            
        }
        
        return true;
        
        
    }
    
    
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        
      int n = graph.size();
        vector<int> colors(n, 0);
        for (int i = 0; i < n; i++) {
            if (!colors[i]) {
                queue<int> todo;
                todo.push(i);
                colors[i] = 1;
                while (!todo.empty()) {
                    int node = todo.front();
                    todo.pop();
                    for (int neigh : graph[node]) {
                        if (!colors[neigh]) {
                            colors[neigh] = -colors[node];
                            todo.push(neigh);
                        } else if (colors[neigh] == colors[node]) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};