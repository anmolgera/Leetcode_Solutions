class Solution {
public:
    
    static bool mycomp (vector<int>&v1 , vector<int>&v2){
    return v1[1] < v2[1];    
        
    }
    
    int findMinArrowShots(vector<vector<int>>& p) {
    int n = p.size();
    if(n<=1) return n;
    
    sort(p.begin(),p.end(),mycomp);
        
    int start = p[0][1];
    int count =0;
    for(int i =1; i<n; i++){
        
        if(start>=p[i][0]) continue;
        count++;
        start = p[i][1];
    }
        
    
    return count+1;
   
        
    }
};