class NumMatrix {
public:
    
    vector<vector<int>> v;
    NumMatrix(vector<vector<int>>& matrix) {
        //v = matrix;
        int n = matrix.size();
        int m = matrix[0].size();
        v = vector<vector<int>> (n+1,vector<int>(m+1,0));
        for(int i =1; i<=n; i++){
            for(int j =1; j<=m; j++){
            v[i][j] = v[i-1][j] + v[i][j-1]+matrix[i-1][j-1]-v[i-1][j-1];      
          }
        }
        //v = sum;
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
       return v[row2+1][col2+1]-v[row2+1][col1]-v[row1][col2+1] + v[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */