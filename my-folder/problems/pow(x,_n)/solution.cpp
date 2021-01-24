class Solution {
public:
    double myPow(double x, int n) {
        
     if(n==0.0000){
          return 1;
     }
    double t;
    if(n>0) t = myPow(x,n/2);
    if(n<0) t =  myPow(1.0/x,-(n/2));
    
    if(abs(n)%2==1){
        
        if(n<0){
            return (1.0/x)*t*t;
        }
        
        return x*t*t;
        
    }
    else return t*t;
    }
};