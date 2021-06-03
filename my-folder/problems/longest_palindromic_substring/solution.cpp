class Solution {
public:
    
    
    
    string longestPalindrome(string s) {
    int n =s.length();
    vector<vector<bool>> dp(n,vector<bool>(n,false));
    for(int i =0; i<n; i++){
        dp[i][i] = true;
    }
    
    int len =1;
    int start =0;
        
    for(int st = n-1; st>=0; st--){
        for(int en = st+1; en<n; en++){
           if(s[st]==s[en]){ 
               
             if( en-st==1 || dp[st+1][en-1]==true ){
                dp[st][en] = true;
                if(len<en-st+1){
                    len = en-st+1;
                    start = st;
                }
              }
           }
            
        }
    }
    return s.substr(start,len);
    }
};