class Solution {
public:
    
    //int res = INT_MAX;
    int func(vector<int>&values, int i, int j, vector<vector<int>> &dp){
    
    if(i+1==j) return 0; // no triangle posiible 
    
    if(dp[i][j]!=-1) return dp[i][j];
    int res = INT_MAX;
    for(int k =i+1; k<j; k++){
        
        int left = func(values,i,k,dp) ;
        int right = func(values,k,j,dp);
        int myans = left + (values[i]*values[j]*values[k])+ right;
        res = min(res, myans);
    }
        
    return dp[i][j] = res;    
        
        
        
    }
    
    
    
    int minScoreTriangulation(vector<int>& values) {
    int n = values.size();
    vector<vector<int>> dp(n,vector<int> (n,-1));
    int ans = func(values,0,n-1,dp);
    return ans;
    }
};