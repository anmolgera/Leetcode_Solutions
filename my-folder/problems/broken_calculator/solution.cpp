class Solution {
public:
    int brokenCalc(int X, int Y) {
    int mnsteps =0;
        
       
        
        while(Y>X){
            if(Y%2==0 ){
                Y/=2;
                mnsteps++;
            }
            else {
                Y++;
                mnsteps++;
            }
        }
        
       return mnsteps + X-Y;     
    }
};