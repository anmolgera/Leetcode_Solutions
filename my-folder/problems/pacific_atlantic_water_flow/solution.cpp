class Solution {
public:
    
    int ax[4] = {0,1,-1,0};
    int ay[4] = {-1,0,0,1};
     vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        int m = matrix.size();
        if (m == 0)
            return ans;
        int n = matrix[0].size();
        vector<vector<bool>> pacific(m, vector<bool>(n,false));
        vector<vector<bool>> atlantic(m, vector<bool>(n,false));
        
        for (int i = 0; i < m; i++) {
            dfs(matrix, pacific, i, 0);
            dfs(matrix, atlantic, i, n-1);

        }
        for (int j = 0; j < n; j++) {
            dfs(matrix, pacific, 0, j);
            dfs(matrix, atlantic, m-1, j);
        }

        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pacific[i][j] && atlantic[i][j]){
                    vector<int> temp;
                    temp.push_back(i);
                    temp.push_back(j);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
    
    void dfs(vector<vector<int>>& matrix, vector<vector<bool>>&visited, int i, int j) {
        int m = matrix.size();
        int n = matrix[0].size();

        visited[i][j] = true;
        for(int k =0; k<4; k++){
            int x1  = i+ax[k];
            int y1 =  j+ay[k];
            if(x1>=0 && y1>=0 && x1<m && y1<n && matrix[x1][y1]>=matrix[i][j] && !visited[x1][y1]){
                visited[x1][y1] = true;
                dfs(matrix,visited,x1,y1);
            }
            else continue;
        }
        return;

    }
};