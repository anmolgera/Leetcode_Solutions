class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    int n = numCourses;
    vector<vector<int>> graph(n);
    vector<int>degree(n,0);
    for(int i =0; i<prerequisites.size(); i++){
        graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
        degree[prerequisites[i][0]]++;
    }
        
    vector<int> bfs;
    for(int i =0; i<n; i++){
        if(degree[i]==0) bfs.push_back(i);
    }
        
    for(int i =0; i<bfs.size(); i++){
    for(int j =0; j<graph[bfs[i]].size(); j++){
            
        //degree[j]--;
        int x = graph[bfs[i]][j];
        degree[x]--;
        if(degree[x]==0){
           bfs.push_back(x);
        }
           
      }    
    }
    return bfs.size()==n;    
    }
};