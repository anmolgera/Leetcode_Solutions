class Solution {
public:
    
    
    void dfs(vector<vector<int>> &graph , vector<vector<int>> & v, vector<int> &path, int s , int d){
        
        
        path.push_back(s);
        
        if(s == d){
            v.push_back(path);
        }
        
        else {
            
            
            for(auto i : graph[s]){
                
                  dfs(graph,v,path,i,d);
                
            }
        }
        
        path.pop_back();
        
        
        
    }
    
    
    
    
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       
        vector<vector<int>> v;
        vector<int> path;
        
        int g = graph.size();
        
        dfs(graph,v, path , 0, g-1);
        return v;
        
        
        
        
        
        
    }
};