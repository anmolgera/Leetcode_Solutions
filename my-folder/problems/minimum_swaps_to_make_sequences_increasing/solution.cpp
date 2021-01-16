class Solution {
public:
    
    int knap(vector<int>&A, vector<int>&B, int prevA, int prevB, int swap, int idx, vector<vector<int>> &dp) {
        
        if(idx==A.size()){
            return 0;
        }
        
        if(dp[idx][swap]!=-1){
            return dp[idx][swap];
        }
        int minswaps = INT_MAX;
        
        if(A[idx]>prevA && B[idx]>prevB){
            minswaps = knap(A,B,A[idx],B[idx],0,idx+1,dp);
        }
        
        if(B[idx]>prevA && A[idx]>prevB){
        minswaps = min(minswaps, knap(A,B,B[idx],A[idx],1,idx+1,dp)+1);
        }
        
        return dp[idx][swap] = minswaps;
    }
    
    
    
    
    
    
    int minSwap(vector<int>& A, vector<int>& B) {
        //int dp[A.size()+1][2];
        vector<vector<int>>dp(A.size()+1, vector<int>(2,-1));
        //emset(dp,-1,sizeof(dp));
        return knap(A,B,-1,-1,0,0,dp);
    }
};