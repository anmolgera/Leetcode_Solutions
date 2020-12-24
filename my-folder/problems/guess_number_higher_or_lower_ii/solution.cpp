class Solution {
public:
    
   int ans(vector<vector<int>>&dp, int s, int e){
       
       if(s>=e){
           return 0;
       }
       
       if(dp[s][e]!=0){
           return dp[s][e];
       }
       
       int mn = INT_MAX;
       for(int i = s; i<=e; i++){
           int res = i + max(ans(dp,i+1,e), ans(dp,s,i-1));
           mn = min(mn,res);
       }
       dp[s][e] = mn;
       return mn;
       
   } 
    
    
    
    
    
    int getMoneyAmount(int n) {
        //t dp[201][201];
        int m = 201;
        vector<vector<int>> dp(m,vector<int>(m,0));
       /*or(int i =0; i<=200; i++){
            for(int j =0; j<=200; j++){
                dp[i][j] =0;
            }
        }
        */
        return ans(dp,1,n);
    }
};