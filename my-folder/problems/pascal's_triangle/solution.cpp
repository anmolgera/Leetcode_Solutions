class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> res;
    res.push_back({1});
    int ch =0;
    for(int i =1; i<numRows; i++){
        vector<int> ans;
        ans.push_back(1);
        for(int j =1; j<=ch; j++ ){
            
             ans.push_back(res[i-1][j-1]+res[i-1][j]);   
        }
        
        ans.push_back(1);
        ch++;
        res.push_back(ans); 
    }
    return res;  
    }
};