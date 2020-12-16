class Solution {
public:
    
    void dfs(vector<vector<int>>& grid, int i, int j, int &res, int &empty){
        
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]<0){
            return;
        }
        
        if( grid[i][j]==2){
            if(empty==0) res++;
            return;
        }
        
        grid[i][j] =-2;
        empty--;
        dfs(grid,i+1,j,res,empty);
        dfs(grid,i,j+1,res,empty);
        dfs(grid,i,j-1,res,empty);
        dfs(grid,i-1,j,res,empty); 
        grid[i][j] =0;
        empty++;
        return;
        
        
        
        
        
        
    }
    int uniquePathsIII(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int res =0;
        int empty =1;
        int sx =0;
        int sy =0;
        for(int i =0; i<n; i++){
            for(int j =0; j<m; j++){
                if(grid[i][j]==0){
                    empty++;
                }
                else if(grid[i][j]==1){
                    sx =i;
                    sy =j;
                }
            }
        }
        
        dfs(grid,sx,sy,res,empty);
        return res;
        
    }
};