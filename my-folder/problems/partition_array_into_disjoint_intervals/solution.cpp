class Solution {
public:
    int partitionDisjoint(vector<int>& A) {
        
        int n = A.size();
        int a[n] ;
        int b[n] ;
        
        int mx = INT_MIN;
        for(int i =0; i<n; i++){
            if(A[i]>mx){
                mx = A[i];
            }
            
            a[i] = mx;
        }
        mx = INT_MAX;
        for(int i =n-1; i>=0; i--){
            if(A[i]<mx){
                mx = A[i];
            }
            
            b[i] = mx;
            
        }
        
        for(int i =0; i<n-1; i++){
            if(a[i]<=b[i+1]){
                return i+1;
            }
        }
        return 0;
    }
};