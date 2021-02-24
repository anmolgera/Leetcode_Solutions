class Solution {
public:
    #define mod 1000000007
    int distinctSubseqII(string S) {
        int n = S.length();
        if(n==1 || n==0){
            return n;
        }
        vector<int> dp(S.length()+1);
        vector<int> last(256,-1);
        dp[0] =1;
        for(int i=1; i<=S.length(); i++){
            
            dp[i] = 2*(dp[i-1]%mod);
            dp[i]%=mod;
            
            if(last[S[i-1]]!=-1){
                dp[i]-=((dp[last[S[i-1]]]));
                dp[i]+=mod;
                dp[i]%=mod;
            }
            
            last[S[i-1]] = i-1;
            
         }
        return dp[S.length()]-1;
    }
};