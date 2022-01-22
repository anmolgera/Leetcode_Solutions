class Solution {
public:
    const static int sz = 1e5+7;
    int arr[sz];
    bool func(int n){
        
        if(n==0) return false;
        if(n==1) return true;
        //int x = sqrt(n);
        //if(x*x == n) return true;
        if(arr[n]!=-1) return arr[n];
        for(int i =1; i*i<=n; i++){
            if(func(n-i*i) == false){
                arr[n] = true;
                return arr[n];
            }
        }
        
        return arr[n] = false;
        
        
    }
    
    
    bool winnerSquareGame(int n) {
    memset(arr,-1, sizeof(arr));
    return func(n);  
    }
};