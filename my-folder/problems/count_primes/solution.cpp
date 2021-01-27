class Solution {
public:
    int countPrimes(int n) {
        
        int a[n+1];
        for(int i =0; i<=n; i++){
            a[i] =0;
        }
        for(int i =2; i*i<=n; i++){
            for(int j =i+i; j<=n; j+=i){
                a[j] =1;
            }
        }
        int cnt =0;
        for(int i =2; i<n; i++){
            if(a[i]==0){
                cnt++;
            }
        }
        
        return cnt;
    }
};