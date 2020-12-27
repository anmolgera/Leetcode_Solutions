class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        vector<int> dp(k+1,0);
         int n = cardPoints.size();
        int sum =0;
        for(int i =0; i<min(k,n); i++){
            sum+=cardPoints[i];
        }
        
        if(n<=k){
            return sum;
        }
        int mx = sum;
       
       for(int i = k-1; i>=0; i--){
           sum-=cardPoints[i];
           sum+=cardPoints[n-k+i];
           mx = max(sum,mx);
           
       }
        return mx;
    }
};