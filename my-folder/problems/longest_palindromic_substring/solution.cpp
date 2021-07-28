class Solution {
public:
    string longestPalindrome(string s) {
   // string s  = "";
    int n = s.length();
    if(n==0) return s;
    vector<vector<bool>> dp(n,vector<bool>(n,false));
    
    for(int i =0; i<n; i++) dp[i][i] = true;
    int start =0;
    int len =1;
    for(int st = n-2;st>=0; st--){
        for(int end = st+1; end<n; end++){
            
            if(s[st]==s[end]){
                
                if((end-st) ==1 ||  dp[st+1][end-1]==true){
                    dp[st][end] = true;
                    if(end-st+1>len){
                        len = end-st+1;
                        start = st;
                        
                    }
                }
            }
        }
    }
        
    return s.substr(start,len);
    }
};