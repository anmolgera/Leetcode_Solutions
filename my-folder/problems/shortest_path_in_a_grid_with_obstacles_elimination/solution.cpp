class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
   
    int n = grid.size();
    if(n==0) return 0;
    int m = grid[0].size();
    
    vector<vector<int>> vis(n,vector<int>(m,-1));
    
    queue<vector<int>> q;
    q.push({0,0,0,k});
    while(!q.empty()){
        auto i = q.front();
        q.pop();
        int x = i[0];
        int y = i[1];
        if(x<0 || y<0 || x>=n || y>=m) continue;
        if(x==n-1 && y == m-1) return i[2];
        if(grid[x][y]==1) {
            
            if(i[3]>0) i[3]--;
            else continue;
            
        }
        
        if(vis[x][y]!=-1 && vis[x][y]>=i[3]) continue;
        vis[x][y] =i[3];
        q.push({x+1,y,i[2]+1,i[3]});
        q.push({x-1,y,i[2]+1,i[3]});
        q.push({x,y+1,i[2]+1,i[3]});
        q.push({x,y-1,i[2]+1,i[3]});
        
        
    }
    return -1;        
    }
};