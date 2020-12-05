class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size();
        int m = colSum.size();
        
        vector<vector<int>> A(n,vector<int>(m,0));
        for(int i =0; i<n; i++){
            
            for(int j =0; j<m; j++){
                
                
                A[i][j] = min(rowSum[i],colSum[j]);
                rowSum[i]-=A[i][j];
                colSum[j]-=A[i][j];
            }
        }
        
        return A;
        
    }
};