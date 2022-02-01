class Solution {
public:
    int climbStairs(int n) {
    int fib[n+1];
        fib[0]=1;
        fib[1] =1;
        
        for(int i =2; i<=n; i++){
            
            fib[i] = fib[i-1] + fib[i-2];
            
            
            
            
            
        }
        
        
    return fib[n];
            
    }
};