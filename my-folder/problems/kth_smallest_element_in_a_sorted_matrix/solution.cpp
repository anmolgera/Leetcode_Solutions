class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
    
    int n = matrix.size();
    for(int i=0; i<n; i++){
        pq.push({matrix[i][0],{i,0}});
    }
    int ans =0;    
    int o = matrix[0].size();
    while(!pq.empty() && k-->0){
        
     auto m = pq.top();
     pq.pop();
      ans = m.first;
     int i = m.second.first;
     int j = m.second.second;
     if(j+1==o) continue;
     pq.push({matrix[i][j+1],{i,j+1}});
     
        
        
        
        
        
    }  
    return ans;
    }
};