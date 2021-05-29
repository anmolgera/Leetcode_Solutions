class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
    int n = arr.size();
    vector<vector<int>> dp(n+1,vector<int>(n+1,2));
    map<int,int> mp;
    for(int i =0; i<n; i++) mp[arr[i]] =i;
    for(int j =1; j<n; j++){
        for(int i =0; i<j; i++){
            
            if(mp.find(arr[j]-arr[i])!=mp.end() && mp[arr[j]-arr[i]]<i){
                dp[i][j] = max(dp[i][j], dp[mp[arr[j]-arr[i]]][i]+1);
            }
            
            
        }
    }
    int ans =0;
    for(int i =0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            ans = max(ans,dp[i][j]);
        }
    }
    return ans==2? 0 : ans;
    }
};