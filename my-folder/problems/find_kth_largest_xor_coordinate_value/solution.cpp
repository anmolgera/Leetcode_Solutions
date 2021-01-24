class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i =0; i<n; i++){
           for(int j =1; j<m; j++){
               
              matrix[i][j]^=matrix[i][j-1];
               
               
           } 
        }
        
           for(int i =0; i<m; i++){
           for(int j =1; j<n; j++){
               
              matrix[j][i]^=matrix[j-1][i];
               
               
           } 
        }
        
        priority_queue<int,vector<int>, greater<int>> pq;
        for(int i =0; i<n; i++){
            for(int j =0; j<m; j++){
                pq.push(matrix[i][j]);
            }
        }
        
        while(pq.size()>k){
            pq.pop();
        }
        
        return pq.top();
    }
    
};