class Solution {
public:
    int rotatedDigits(int n) {
    int cnt =0;
    for(int i =1; i<=n; i++){
        
        int num =i;
        bool check = false;
        while(num>0){
        int d = num%10;
        if(d==4 || d==7 || d==3){
            check = false;
            break;
        }
            
        if(d == 2 || d==5 || d==6 || d==9){
            check = true;
            
        }
            
        num = num/10;    
            
        }
       
        if(check){
            cnt++;
        }
    }    
        
    return cnt;
    }
};