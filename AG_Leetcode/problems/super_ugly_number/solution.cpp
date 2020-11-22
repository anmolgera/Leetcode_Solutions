class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        
        int m = primes.size();
        vector<int> v(m,0);
        
        int k[n+1];
        k[0] =1;
        
        for(int i=1; i<n; i++){
            
            int mn = INT_MAX;
            
            for(int j =0; j<m; j++){
                
                mn =min(mn,primes[j]*k[v[j]]);
                
                
            }
            
            for(int j =0; j<m; j++){
                
                if((primes[j]*k[v[j]])==mn){
                    v[j]++;
                }
                
            }
            
            k[i] = mn;
            
        }
        
        
        
       return k[n-1]; 
        
        
    }
};