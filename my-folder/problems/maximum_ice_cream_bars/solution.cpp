class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
    int mx =0;
    int ans =0;
    sort(costs.begin(),costs.end());
    for(int i =0; i<costs.size(); i++){
        if(costs[i]<=coins){
            coins-=costs[i];
            ans++;
        }
        else break;
    }
    return ans;
    }
};