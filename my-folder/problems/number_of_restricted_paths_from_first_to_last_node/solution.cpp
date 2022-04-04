class Solution {
public:
#define pi pair<int, int>
    const int mod = 1e9+7;
    vector<int> dis, vis, dp;
    vector<vector<pi>> g;
    int n;
	
    // FIND SHORTEST PATH FROM 'n' to ALL OTHER NODES
    void dijkstra(int u) {
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        dis[u] = 0;
        pq.push({0, u});

        while(!pq.empty()) {
            int u = pq.top().second;
            pq.pop();
            
            if(vis[u]) {
                continue;
            }
            vis[u] = 1;
            for(auto p: g[u]) {
                int v = p.first, w = p.second;
                if(dis[u] + w < dis[v]) {
                    dis[v] = dis[u] + w;
                    pq.push({dis[v], v});
                }
            }
        }
    }
    
	// FIND PATHS WITH DECREASING DISTANCES TO 'n'
    int dfs(int u) {
        if(u == n) {
            return 1;
        }
        if(dp[u] != -1) {
            return dp[u];
        }
        
        dp[u] = 0;
        for(auto p: g[u]) {
            int v = p.first;
            if(dis[v] < dis[u]) {
                dp[u] = (dp[u] + dfs(v)) % mod;
            }
        }
        return dp[u];
    }
    
    int countRestrictedPaths(int n, vector<vector<int>>& edges) {
        this->n = n;
        dis.assign(n+1, INT_MAX);
        vis.assign(n+1, 0);
        g.assign(n+1, vector<pi>());

        for(auto e: edges) {
            int u = e[0], v = e[1], w = e[2];
            g[u].push_back({v, w});
            g[v].push_back({u, w});
        }
        
        dijkstra(n);
        dp.assign(n+1, -1);
        return dfs(1);
    }
};