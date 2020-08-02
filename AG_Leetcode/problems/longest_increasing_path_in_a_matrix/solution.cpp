class Solution {
public:
    
    
    bool vis[1001][1001];
    int dp[1001][1001];
    
    int dfs(int x, int y, vector<vector<int>>& matrix){
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        
        if(dp[x][y]!=1){
            
            return dp[x][y];
        }
        
        vis[x][y] = true;
        
        pair<int,int> p[] = {{1,0}, {0,1}, {0,-1}, {-1,0}};
        
        for(int i =0; i<4; i++){
            
            int xx = x+p[i].first;
            int yy = y+p[i].second;
            
            
            if(xx<n && yy< m && xx>=0 && yy>=0 &&            
            !vis[xx][yy] && matrix[xx][yy] > matrix[x][y] ){
                
                
                dp[x][y] = max(dp[x][y],1+dfs(xx,yy,matrix));
                
                
                
            }
            
            
            
        }
        
       vis[x][y] = false; 
        return dp[x][y];
        
        
        
        
    }
    
    
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        if(n==0){
            
            return 0;
        }
        
        int m = matrix[0].size();
        
        
        
        for(int i =0; i<n; i++){
            
            for(int j =0; j<m; j++){
                
                dp[i][j] =1;
               vis[i][j] = false;
            }
             }
        
        
        int maxx =1;
        
        for(int i =0; i<n; i++){
            
            for(int j =0; j<m; j++){
                
              if(!vis[i][j]) {
               maxx = max(maxx, dfs(i,j,matrix));
            }
            
            }
            
            
        }
        
        return maxx;
        
    }
};