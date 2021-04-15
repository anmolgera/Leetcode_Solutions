class Solution {
public:
    int kthGrammar(int N, int k) {
    if(N==1){
        return 0;
    }    
    
    if(k%2==0){
        if(kthGrammar(N-1,k/2)==0){
            return 1;
        }
        
        else return 0;
    }
        
    else {
        
        if(kthGrammar(N-1,(k+1)/2)==0){
            return 0;
        }
        else return 1;
    }
    }
};