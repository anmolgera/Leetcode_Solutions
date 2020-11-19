class Solution {
public:
    
    void dfs(vector<string> & v, int n, int m, string res){
        
        if(n==0 && m==0){
            v.push_back(res);
        }
        
        if(m>0) dfs(v,n,m-1,res+')');
        if(n>0) dfs(v,n-1,m+1,res+'(');
        
        
        
        
        
    }
    
    
    vector<string> generateParenthesis(int n) {
        
        vector<string> v;
        dfs(v, n, 0, "");
        return v;
        
    }
};