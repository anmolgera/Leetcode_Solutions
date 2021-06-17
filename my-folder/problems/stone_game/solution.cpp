class Solution {
public:
    
    int recur(vector<int>&piles, int st , int end ,  int choice ,   vector<vector<int>> &v){
    if(st>end) return 0;
     if(v[st][end]!=-1) return v[st][end];
     if(choice==0){
         
         int ans1 = recur(piles,st+1,end,1,v)  + piles[st];
         int ans2 = recur(piles,st,end-1,1,v)  + piles[end];
         return v[st][end] = max(ans1,ans2);
         
     }
        
        
     else {
         
         int ans1 = recur(piles,st+1,end,0,v)  - piles[st];
         int ans2 = recur(piles,st,end-1,0,v)  - piles[end];
         return v[st][end]=  min(ans1,ans2); 
         
     }
     
        
    }
    
    bool stoneGame(vector<int>& piles) {
    int n = piles.size();
    vector<vector<int>> v(n,vector<int>(n,-1));
    return recur(piles,0,n-1,0,v)>0;    
    }
};