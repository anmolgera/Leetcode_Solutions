class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& A) {
        
        int m =0;
        int mx = A[0];
        
       for(int i =1; i<A.size(); i++){
           
           m = max(m, mx + A[i] -i);
           mx = max(mx,A[i] + i);
           
           
           
           
       }
        
        
       return m; 
        
    }
};