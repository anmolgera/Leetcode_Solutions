class Solution {
public:
    vector<int> getRow(int rowIndex) {
    vector<vector<int>> res;
    res.push_back({1});
    int prev =0;
    for(int i =1; i<34; i++){
       vector<int> ans= {1};
       for(int j =1; j<=prev; j++){
           
           ans.push_back(res[i-1][j-1]+res[i-1][j]);
           
       }
       ans.push_back(1);
       res.push_back(ans);
       prev++;
        
    }
    return res[rowIndex];
    }
};