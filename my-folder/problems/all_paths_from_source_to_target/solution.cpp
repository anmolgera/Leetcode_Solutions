class Solution {
public:
    
    void dfs(vector<vector<int>>& graph,  vector<vector<int>> &v,    vector<int> path , int src , int des){
        
        path.push_back(src);
        if(src==des){
            v.push_back(path);
           
        }
        
     
        
       else for(int i =0; i<graph[src].size(); i++){
            dfs(graph,v,path,graph[src][i],des);
        }
        path.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    vector<vector<int>> v;
    vector<int> path;
    int g = graph.size()-1;
    dfs(graph,v,path,0,g);
    return v;
    
    }
};