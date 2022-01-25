class Solution {
public:
    
    int dp[51][51][51];
    
    int func(int r1, int c1, int r2, vector<vector<int>>& grid ){
        int n = grid.size();
        int c2 = r1+c1-r2;
        if(r1 >=n || r2 >=n || c1 >=n || c2 >=n || grid[r1][c1] == -1 || grid[r2][c2] == -1 ) return INT_MIN;
        if(dp[r1][c1][r2] !=-1) return dp[r1][c1][r2];
        if(r1 == n-1 && c1 == n-1) return grid[r1][c1];
        int ans = 0;
        if(r1 == r2 && c1 == c2) ans += grid[r1][c1];
        else ans += (grid[r1][c1] + grid[r2][c2]);
        
        int a = func(r1+1 ,c1,r2+1,grid);
        int b = func(r1,c1+1,r2,grid);
        int c = func(r1,c1+1,r2+1,grid);
        int d = func(r1+1,c1,r2,grid);
        
        return dp[r1][c1][r2] = ans + max(max(a,b),max(c,d));
    }
    
    
    
    
    int cherryPickup(vector<vector<int>>& grid) {
    int n = grid.size();
    memset(dp,-1,sizeof(dp));
    return max(0,func(0,0,0,grid));
    }
};