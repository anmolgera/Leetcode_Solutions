class Solution {
public:
    
    int dfs(vector<int>&dp, vector<int>&A, int K, int start){
        int n = A.size();
        if(start>=n){
            return 0;
        }
        int max_element = INT_MIN;
        int max_sum = INT_MIN;
        if(dp[start]!=-1){
            return dp[start];
        }
        
        for(int i = start; i<min(n,start+K); i++){
            max_element = max(max_element, A[i]);
            max_sum = max(max_sum, max_element*(i-start+1) + dfs(dp,A,K,i+1));
            
        }
        
        dp[start] = max_sum;
        return max_sum;
        
    }
    
    
    
    int maxSumAfterPartitioning(vector<int>& A, int K) {
        int n = A.size();
        vector<int> dp(n+1,-1);
        int x = dfs(dp,A,K,0);
        return x;
    }
};