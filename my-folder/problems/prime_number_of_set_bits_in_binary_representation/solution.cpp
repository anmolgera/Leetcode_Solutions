class Solution {
public:
    
    bool isPrime(int n){
        
        for(int i =2; i*i<=n; i++){
            if(n%i==0) return false;
        }
        if(n>=2) return true;
        else return false;
    }
    int countPrimeSetBits(int left, int right) {
        int ans =0;
        for(int i = left; i<=right; i++){
            
            int j =i;
            int cnt =0;
            while(j){
                if(j&1) cnt++;
                j>>=1;
               
                
            }
            //cnt++;
            if(isPrime(cnt)){
                ans++;
            }
            
        }
        return ans;
    }
};