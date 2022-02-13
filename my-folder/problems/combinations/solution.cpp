class Solution {
public:
    
    
  void  backtrack(vector<vector<int>>& v, vector<int> & comb, int n, int k,int start){
        
      
        if(comb.size()==k ){
            vector<int> a = comb;
            v.push_back(a);
            for(int i =0; i<a.size(); i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            return;
        }
      
        for(int i = start; i<=n; i++){
            comb.push_back(i);
            backtrack(v,comb,n,k,i+1);
            comb.pop_back();
        }
       
      //return;
        
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> v;
        vector<int> comb;
        backtrack(v,comb,n,k,1);
        return v;
    }
};