class Solution {
public:
    int reverse(int x) {
    int sign;
    if(x<0) sign =-1;
    else sign =1;
    
    x = abs(x);
        
    int ans =0;
    
    //INT_MAX = ans*10 + x%10;
    while(x>0){
        
    if(INT_MAX/10<ans || (INT_MAX-x%10)/10<ans) return 0;
    ans = ans*10 + x%10;
    x/=10;
        
        
        
    }
    
        
    return sign*ans;
        
    }
};