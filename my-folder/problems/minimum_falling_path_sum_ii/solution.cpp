class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& arr) {
        int n = arr.size();
        for(auto i =1; i<n; i++){
            for(auto j =0; j<n; j++){
                
                int mn = INT_MAX;
                for(int k =0; k<n; k++){
                    if(k!=j){
                        mn = min(mn,arr[i-1][k]);
                    }
                }
                arr[i][j]+=mn;
            }
        }
        int mn = INT_MAX;
        for(int i =0; i<arr.size(); i++){
            mn = min(mn,arr[n-1][i]);
        }
        return mn;
    }
};