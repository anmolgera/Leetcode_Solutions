class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int n = A.size();
        for(auto i =1; i<A.size(); i++){
            
            for(auto j =0; j<A.size(); j++){
                
                A[i][j] += min(A[i-1][j],min( A[i-1][max(j-1,0)] , A[i-1][min(j+1,n-1)] ));
            }
        }
        
       int mn = INT_MAX;
       for(int i =0; i<A.size(); i++){
           mn= min(mn,A[A.size()-1][i]);
       }
    return mn;
    }
};