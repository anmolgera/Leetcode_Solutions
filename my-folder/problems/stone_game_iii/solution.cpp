class Solution {
public:
    
    int s(vector<int>&stoneValue, int i, int choice,  vector<vector<int>> &dp){
        
        if(i>=stoneValue.size()) return 0;
        if(dp[i][choice]!=-1) return dp[i][choice];
        int ans =0;
        
        if(choice==1){
            ans =  INT_MIN;
        }
        else ans = INT_MAX;
        int score =0;
        int n = stoneValue.size();
        for(int j =i; j<min(n,i+3); j++) {
            
            if(choice==1){
                score +=stoneValue[j];
                ans = max(ans, score+s(stoneValue,j+1,0,dp));
            }
            
            else {
                score -=stoneValue[j];
                ans = min(ans,score+s(stoneValue, j+1,1,dp));
            }
            
            
            
        }
        return dp[i][choice] = ans;
        
    }
    
    string stoneGameIII(vector<int>& stoneValue) {
    int n = stoneValue.size();
    vector<vector<int>> dp(n+1,vector<int>(3,-1));
    int x = s(stoneValue,0,1,dp);   
    if(x>0) return "Alice";
    else if(x==0) return "Tie";
    else return "Bob";
    }
};