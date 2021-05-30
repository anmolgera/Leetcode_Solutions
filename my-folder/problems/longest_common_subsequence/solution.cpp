class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
    
    int n = text1.size();
    int m = text2.size();
        
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        
    for(int i =1; i<=n; i++){
        for(int j =1; j<=m; j++){
            
         if(text1[i-1]==text2[j-1]){
             dp[i][j] = 1+dp[i-1][j-1];
         }    
        
         else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            
            
        }
    }
        
    int index = dp[n][m];
    string s;
    s.resize(index);
    
    int i =n;
    int j =m;
    
    while(i>0 && j>0){
        if(text1[i-1]==text2[j-1]){
            s[index-1] = text1[i-1];
            i--;
            j--;
            index--;
        }
        
        else if(dp[i-1][j]>dp[i][j-1]){
           i--; 
        }
        
        else {
            j--;
        }
    }
        
    cout<<s<<endl;     
    return dp[n][m];    
    }
};