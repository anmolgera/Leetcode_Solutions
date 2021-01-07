class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int mn = INT_MAX;
        int mx =0;
      for(int i =0; i<prices.size(); i++){
          if(prices[i]<mn){
              mn = prices[i];
          }
          
          if(prices[i]-mn>mx){
              mx = prices[i]-mn;
          }
      }
        
        return mx;
    }
};