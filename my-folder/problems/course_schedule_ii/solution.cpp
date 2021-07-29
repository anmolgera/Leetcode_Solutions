class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
    
    int n = numCourses; 
    vector<vector<int>> graph(n);
    vector<int> indegree(n);
    
    
    for(int i =0; i<prerequisites.size(); i++){
        graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
        indegree[prerequisites[i][0]]++;
    }
        
    vector<int> bfs;
    for(int i =0; i<n; i++){
        if(indegree[i]==0) {
            bfs.push_back(i);
        }
    }
    
    for(int i =0; i<bfs.size(); i++){
        for(int j =0; j<graph[bfs[i]].size(); j++){
            int x = graph[bfs[i]][j];
            indegree[x]--;
            if(indegree[x]==0){
                bfs.push_back(x);
            }
        }
    }
    if(bfs.size()==n) return bfs;
    else return {};
    }
};