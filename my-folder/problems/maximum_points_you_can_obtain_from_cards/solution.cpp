class Solution {
public:
    
    
    /*int func(vector<int>&cardPoints, int k, int i, int j, vector<vector<int>> &dp){
        
        if(i>j || k==0){
            return 0;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        return dp[i][j] = max(cardPoints[i] + func(cardPoints, k-1, i+1, j,dp), cardPoints[j] + func(cardPoints,k-1,i,j-1,dp));
        
    }
    */
    int maxScore(vector<int>& cardPoints, int k) {
        int sum =0;
        for(int i =0; i<k; i++){
          sum+=cardPoints[i];  
        }
       int n = cardPoints.size(); 
       int mx =sum;
       int z = k-1;
       for(int j =n-1; j>=n-k; j-- ){
           sum-=cardPoints[z];
           z--;
           sum+=cardPoints[j];
           mx = max(mx,sum);
       }
      return mx;
    }
};