class Solution {
public:
    vector<vector<int>> dp;
    bool dfs(int i, int j, int k, string &s1, string &s2, string &s3){
        
        if(i==s1.length() && j==s2.length() && k==s3.length()){
            return true;
        }
        
        else if(dp[i][j]!=-1){
            return dp[i][j];
        }
        else{
        bool res = false;
            
        if(i<s1.length() && s3[k]==s1[i]){
            
           res =  res || dfs(i+1,j,k+1,s1,s2,s3);  
            
        }
        
        
         if(j < s2.length() && s3[k]==s2[j]){
            
           res =  res ||  dfs(i,j+1,k+1,s1,s2,s3);  
            
        }
        
        
         return dp[i][j] = res;
        
        }
        
    }
    
    
    
    
    
    bool isInterleave(string s1, string s2, string s3) {
        dp.resize(s1.size()+1,vector<int>(s2.size()+1,-1));
       return dfs(0,0,0,s1,s2,s3); 
    }
};