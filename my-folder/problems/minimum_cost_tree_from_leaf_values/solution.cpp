class Solution {
public:
    
    int maxi [41][41];
    int memo [41][41];
    
    int dp(int start,int end){
       
        if(start==end){
            return 0;
        }
        
        if(memo[start][end]!=-1){
            return memo[start][end];
        }
        int ans = 10000;
        for(int i = start; i<end; i++){
            ans= min(ans,maxi[start][i]*maxi[i+1][end]+dp(start,i)+dp(i+1,end));
            
        }
        memo[start][end] = ans;
        return ans;
    }
    int mctFromLeafValues(vector<int>& arr) {
  
        memset(memo,-1,sizeof(memo));
       // memset(maxi,0,sizeof(maxi));
        for(int i =0; i<arr.size(); i++){
            maxi[i][i] = arr[i];
            for(int j = i+1; j<arr.size(); j++){
                maxi[i][j] = max(maxi[i][j-1],arr[j]);
                
            }
        }
      
        return dp(0,arr.size()-1);
        
        
        
        
        
    }
};