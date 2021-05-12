class Solution {
public:
    
    int res =0;
    int t;
    map<int,int> mp;
    void get1d(vector<int> & ans){
        
        int sum =0;
        mp.clear();
        
        mp[0]++;
        for(int i =0; i<ans.size(); i++){
            sum+=ans[i];
            res+=mp[sum-t];
            mp[sum]++;
        }
        
        
        
        
    }
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
    int n =  matrix.size();
    if(n==0) return 0;
    int m =  matrix[0].size();
    t = target;
    
    vector<int> ans(m);
    for(int i =0; i<n; i++){
    fill(ans.begin(),ans.end(),0);
    for(int j =i; j<n; j++){
        
        for(int k =0; k<m; k++){
            ans[k]+=matrix[j][k];
        }
        get1d(ans);
        
    }
     
    
    } 
  
        
    return res;
        
    }
    
};