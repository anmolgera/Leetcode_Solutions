class Solution {
public:
    string removeOuterParentheses(string S) {
        
        string res ="";
        int open =0;
        for(char c: S){
            
            
            if(c=='(' && open++ >0) res+=c;
            if(c==')' && open-- >1) res+=c;
        }
        
        return res;
        
    }
};