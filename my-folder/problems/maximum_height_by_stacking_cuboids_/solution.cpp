class Solution {
public:
    int maxHeight(vector<vector<int>>& cuboids) {
     
    for(int i =0; i<cuboids.size(); i++){
        vector<int> v = cuboids[i];
        sort(v.begin(),v.end());
        cuboids[i] = v;
    }
    cuboids.push_back({0,0,0});
    sort(cuboids.begin(),cuboids.end());
    int n = cuboids.size();
    vector<int> dp(n,0);
    for(int i =1; i<n; i++){
        for(int j=0; j<i; j++){
            if(cuboids[i][0]>=cuboids[j][0] && cuboids[i][1]>=cuboids[j][1] && cuboids[i][2]>=cuboids[j][2] ){
                dp[i] = max(dp[i],dp[j]+cuboids[i][2]);
            }
        }
    }
    return *max_element(dp.begin(),dp.end());
    }
};