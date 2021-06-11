class Solution {
public:
    
    int func(vector<int>&arr, int i, int d, vector<int>&dp ){
    if(dp[i]!=0) return dp[i];
    int n = arr.size();    
    int l = max(0,i-d);
    int r = min(n-1,i+d);
    int res =0;
    for(int j = i-1; j>=l && arr[i]>arr[j]; j--) res = max(res,func(arr,j,d,dp));
    for(int j = i+1; j<=r && arr[i]>arr[j]; j++) res = max(res,func(arr,j,d,dp));
    return dp[i] = res+1;    
    }
    
    
    
    int maxJumps(vector<int>& arr, int d) {
    int mx =0;
    int n = arr.size();
    vector<int> dp(n,0);
    for(int i =0; i<arr.size(); i++){
        mx = max(mx, func(arr,i,d,dp));
    }
    return mx;
    }
};