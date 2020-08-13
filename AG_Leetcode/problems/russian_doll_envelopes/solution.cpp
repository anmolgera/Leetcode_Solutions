class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        if(envelopes.size()==0){
            
            return 0;
        }
        
        int n = envelopes.size();
        sort(envelopes.begin(),envelopes.end());
        
        vector<int> dp(n,1);
        
        for(int i =1; i<n; i++){
            
            for(int j =0; j<i; j++){
                
                
                if(envelopes[i][0]>envelopes[j][0] && envelopes[i][1]>envelopes[j][1] ){
                    
                    
                    dp[i] = max(dp[i],dp[j]+1);
                    
                    
                }
                
                
                
                
            }
            
            
            
        }
        
        int max_result =0;
        
        for(int i =0; i<n; i++){
            
           if(max_result < dp[i]){
               
               max_result = dp[i];
           }
            
        }
        
        
        
      return max_result;  
        
    }
};