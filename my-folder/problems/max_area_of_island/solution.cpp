class Solution {
public:
   // int cnt;
    int dfs(vector<vector<int>>&grid,int cnt, int i, int j, int n , int m ){
        
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]!=1) return 0;
        grid[i][j] =-1;
        //cnt++;
        return 1+dfs(grid,cnt,i+1,j,n,m) + dfs(grid,cnt,i,j+1,n,m) +dfs(grid,cnt,i,j-1,n,m)+dfs(grid,cnt,i-1,j,n,m);
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int mx =0;
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
           if(grid[i][j]==1){
               //cnt =0;
               int x = dfs(grid,0,i,j,n,m);
               mx = max(mx,x);
           } 
        }
    }
        
    return mx;
    }
};