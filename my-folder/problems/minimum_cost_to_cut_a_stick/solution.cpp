class Solution {
public:
    int dp[102][102] ={};
    int func(vector<int>&cuts, int i, int j){
        
        if(i+1==j){
            return 0;
        }
        
        if(dp[i][j]!=0){
            return dp[i][j];
        }
        int ans = INT_MAX;
        for(int k =i+1; k<j; k++){
            
            ans = min(ans,func(cuts,i,k)+ cuts[j]-cuts[i] + func(cuts,k,j) );
        }
        
        return dp[i][j] = ans;
        
    }
    
    
    int minCost(int n, vector<int>& cuts) {
    cuts.push_back(0);
    cuts.push_back(n);
    n = cuts.size();
    sort(cuts.begin(),cuts.end());
    
    int res = func(cuts, 0, n-1);
    return res;
    }
};