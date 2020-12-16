class Solution {
public:
    
    void backtrack(vector<vector<int>> &v, vector<int> &comb, int k , int n, int sum,int start){
        
        if(comb.size()==k && sum==n){
            vector<int> a = comb;
            v.push_back(a);
            return;
        }
        
       
        for(int i =start; i<=9; i++){
            comb.push_back(i);
            backtrack(v,comb, k , n, sum+i,i+1);
            comb.pop_back();
        }
        return;
        
        
    }
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>>v;
        vector<int> comb;
        backtrack(v,comb,k,n,0,1);
        return v;
    }
};