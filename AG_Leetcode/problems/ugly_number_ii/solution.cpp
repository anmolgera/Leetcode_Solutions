class Solution {
public:
    int nthUglyNumber(int n) {
        
        if(n<=0){
            return 0;
        }
        
        if(n==1){
            
            return 1;
        }
        
        int p2 =0;
        int p3 =0;
        int p5 =0;
        
        
        int k[n+1];
        k[0] =1;
        //k[1] =1;
        
        for(int i=1; i<n; i++){
            
            k[i] = min(k[p2]*2, min(k[p3]*3,k[p5]*5));
            if(k[i]==2*k[p2]) p2++;
            if(k[i]==3*k[p3]) p3++;
            if(k[i]==5*k[p5]) p5++;
            
        }
        
        return k[n-1];
        
        
        
        
    }
};