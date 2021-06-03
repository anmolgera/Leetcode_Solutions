class Solution {
public:
    
   
    
    int minCut(string s) {
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
   
    vector<int> mn(n+1,0);
    for(int i =0; i<s.length(); i++){
        int cut =i;
        for(int j =0; j<=i; j++){
            if(dp[j][i])
            cut = min(cut,j==0 ? 0 : mn[j-1]+1);
        }
        mn[i] = cut;
    }
    return mn[n-1];
    }
};