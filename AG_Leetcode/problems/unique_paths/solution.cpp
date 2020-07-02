class Solution {
public:
    int uniquePaths(int m, int n) {
        
        long long int count =1;
        
        
        for(int i =n; i<n+m-1; i++){
            
           count = count*i;
            count = count/(i-n+1);
            
            
            
        }
        
       return count; 
        
        
    }
};