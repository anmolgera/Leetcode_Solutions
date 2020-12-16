class Solution {
public:
    
    
   void backtrack(string &S, vector<string>&v, int start ){
        
        if(start==S.size()){
           v.push_back(S);
            return;
        }
        
          backtrack(S,v,start+1);
          
          if(isalpha(S[start])){
              
              S[start] ^=(1<<5);
              backtrack(S,v,start+1);
          }
        
            return;
    }
    vector<string> letterCasePermutation(string S) {
        vector<string> v;
        backtrack(S,v,0);
        for(int i =0; i<v.size(); i++){
            cout<<v[i]<<endl;
        }
        return v;
    }
};