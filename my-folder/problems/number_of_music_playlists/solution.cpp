class Solution {
public:
    long long int memo[101][101];
    long long int dp(int N, int L, int K){
        
        
        if(N==0 && L!=0 || N!=0 && L==0){
            return 0;
        }
        
        else if(N==0 && L==0){
            return 1;
        }
        
        if(memo[N][L]!=-1){
            return memo[N][L];
        }
        
        long long int ans = ((((dp(N-1,L-1,K)%1000000007)*N)%1000000007) + ((dp(N,L-1,K)%1000000007)*(max(0,N-K))%1000000007));
        ans%=1000000007;
        memo[N][L] = ans;
        return ans;
    }
    int numMusicPlaylists(int N, int L, int K) {
       
        memset(memo,-1,sizeof(memo));
        return dp(N,L,K);
        
        
        
    }
};