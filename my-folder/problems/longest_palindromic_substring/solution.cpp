class Solution {
public:
    string longestPalindrome(string s) {
    if(s.length()<=1){
        return s;
    }
    int n = s.length();    
    vector<vector<int>> dp(n,vector<int>(n,false));
        
    for(int i =0; i<s.length(); i++){
        dp[i][i] = true;
    }
    
    int len =1;
    int st =0;
       
    for(int start = s.length()-1; start>=0; start--){
        
     for(int end = start+1; end<s.length(); end++){
         
         
         if(s[start]==s[end]){
             if(dp[start+1][end-1] || end-start==1){
                 dp[start][end] = true;
                 if(end-start+1>len){
                     len = end-start+1;
                     st = start;
                 }
             }
         }
         
       }
    }
        
    return s.substr(st,len);
    }   
};