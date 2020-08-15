class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int idx =0;
        
        
        for(int i =0; i<t.length(); i++){
            
            if(s[idx]==t[i]){
                
                idx++;
            }
            
            
            
        }
        
       return idx == s.length(); 
        
    }
};