class Solution {
public:
    int findComplement(int N) {
        
        
         int x =1;
        while(x<N){
            x = 2*x+1;
        }
        
        return x^N;
            
     
    }
};