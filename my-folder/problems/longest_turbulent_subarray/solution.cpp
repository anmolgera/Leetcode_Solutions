class Solution {
public:
    int maxTurbulenceSize(vector<int>& A) {
        int inc =1;
        int dec =1;
        int res =1;
        
        for(int i =1; i<A.size(); i++){
            
            if(A[i]>A[i-1]){
                inc = dec+1;
                dec =1;
            }
            
            else if(A[i]<A[i-1]){
                dec = inc+1;
                inc = 1;
                
            }
            
            else {
                dec =1;
                inc =1;
            }
            
            res = max({dec,inc,res});
            
            
            
            
            
            
        }
        return res;
    }
};