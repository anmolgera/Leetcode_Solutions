class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
         vector<vector<int>> graph(n);
        vector<int> degree (n,0), bfs;
        
        for(auto e : prerequisites){
            
            graph[e[1]].push_back(e[0]);
            degree[e[0]]++;
            
            
            
        }
        
        
        for(int i =0; i<n; i++){
            
            if(degree[i]==0){
                
                bfs.push_back(i);
            }
        }
        
        
        for(int i =0; i<bfs.size(); i++){
            
            for(auto j : graph[bfs[i]]){
                
                degree[j]--;
                if(degree[j]==0){
                    bfs.push_back(j);
                }
                
            }
            
            
        }
        vector<int> v;
       return bfs.size()==n? bfs :v ;
        
    }
};