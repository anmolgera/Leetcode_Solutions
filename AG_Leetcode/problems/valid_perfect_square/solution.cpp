class Solution {
public:
    bool isPerfectSquare(int n) {
        
        long long int i=1;
        for(; i*i<=n; i++){
            
            if(n/i ==i && n%i==0){
                
                return true;
                
                
            }
            
        }
        
        
       return false; 
        
    }
};