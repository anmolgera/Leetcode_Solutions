class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
    int n = queries.size();
    vector<int> ans(n,0);
        
    
 
        
    for(int i =0; i<queries.size(); i++){
     int sum=0;
     for(int j =0; j<points.size(); j++){
         
         int x1 = queries[i][0];
         int y1 = queries[i][1];
         int r  = queries[i][2];
         
         int a = points[j][0];
         int b = points[j][1];
         
         if(((a-x1)*(a-x1)  + (b-y1)*(b-y1)) <= r*r){
         sum++;    
         }
         
     }
     ans[i] = sum;
        
    } 
     return ans;   
    }
};