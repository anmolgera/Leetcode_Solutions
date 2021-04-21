class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int mn = INT_MAX;
    int ans = INT_MIN;
    for(int i =0; i<prices.size(); i++){
        mn = min(mn,prices[i]);
        ans = max(ans,prices[i]-mn);
    }
        
    return ans;
    }
};