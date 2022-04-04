class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
    
    vector<vector<pair<long long,long long>>> graph(n);
    for(auto i : roads) {
        graph[i[0]].push_back({i[1],i[2]});
        graph[i[1]].push_back({i[0],i[2]});
    }
    
    vector<long long> dist(n, LONG_MAX);
    vector<long long> ways(n,0);
        
    priority_queue<pair<long long ,long long>, vector<pair<long long, long long>>, greater<>> min_heap;
    
    min_heap.push({0,0});
    dist[0] = 0;
    ways[0] = 1;
    
    while(!min_heap.empty()){
        
        auto i = min_heap.top();
        min_heap.pop();
        int time = i.first;
        int node = i.second;
        if (time > dist[node]) continue; // Dicey
        for(int j =0; j < graph[node].size(); j++){ 
            int next_node = graph[node][j].first;
            int next_node_time = graph[node][j].second;
            
            if (dist[next_node] > dist[node] + next_node_time){
                dist[next_node] = dist[node] + next_node_time;
                ways[next_node] = ways[node];
                min_heap.push({dist[next_node], next_node});
            }
          
            else if(dist[next_node] == dist[node] + next_node_time){
            ways[next_node] = (ways[next_node] + ways[node])%1000000007;
            }
        }
        
    }
    
    return ways[n-1];
 }
};