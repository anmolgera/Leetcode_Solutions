class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        
        if(n==0){
            
            return "";
        }
        
        sort(strs.begin(),strs.end());
        
        string res ="";
        
        string x = strs[0];
        string y = strs[n-1];
        
        for(int i =0; i<x.length(); i++){
            
                
           if(x[i]==y[i]){
               
               res+=x[i];
           }
            
            else break;
            
            
            
        }
        
        
        return res;
        
        
    }
};