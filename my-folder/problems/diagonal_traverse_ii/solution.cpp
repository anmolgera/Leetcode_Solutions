class Solution {
public:
   
    

    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
    vector<vector<int>> v(200005);
    for(int i =0; i<matrix.size(); i++){
        for(int j =0; j<matrix[i].size(); j++){
            v[i+j].push_back(matrix[i][j]);
        }
    }
    
    for(int i =0; i<v.size(); i++){
        vector<int> c = v[i];
        //sort(c.begin(),c.end(),cmp);
        reverse(c.begin(),c.end());
        v[i] = c;
        
    }
    vector<int> ans;
        
    for(int i =0; i<v.size(); i++){
        for(int j =0; j<v[i].size(); j++){
            ans.push_back(v[i][j]);
        }
    }
    return ans;
        
    }
};