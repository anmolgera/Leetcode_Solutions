class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
    int sum =0;
    int n = grid.size();
    int m = grid[0].size();
    vector<int> row(n,0);
    vector<int> col(m,0);
        

    for(int i =0; i<grid.size(); i++){
        for(int j =0; j<grid[0].size(); j++){
        
            if(grid[i][j]){
                row[i]++;
                col[j]++;
            }
            
          
        }
    }
     int ans =0;   
     for(int i =0; i<n; i++){
         for(int j =0; j<m; j++){
             if(grid[i][j] && (row[i]>1 || col[j]>1)){
                 ans++;
             }
         }
     }   
        
        
        
    return ans;
    }
};