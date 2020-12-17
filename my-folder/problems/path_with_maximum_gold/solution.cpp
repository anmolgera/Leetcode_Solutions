class Solution {
public:
    int result = INT_MIN;
    
    
    int dfs(vector<vector<int>>& grid, int i, int j,int sum){
        
        if(i<0 ||  j<0 || i>=grid.size() || j>=grid[0].size()|| grid[i][j]==0){
            return sum;
        }
        
        int temp = grid[i][j];
        grid[i][j] =0;
        result = max(result,dfs(grid,i+1,j,sum+temp));
        result = max(result,dfs(grid,i,j+1,sum+temp));
        result = max(result,dfs(grid,i-1,j,sum+temp));
        result = max(result,dfs(grid,i,j-1,sum+temp));
        grid[i][j] = temp;
        return result;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i =0; i<n; i++){
            
            for(int j =0; j<m; j++){
                
                if(grid[i][j]!=0){
                    result = max(result, dfs(grid,i,j,0));
                }
            }
        }
        
        return result;
        
        
        
        
        
        
        
    }
};