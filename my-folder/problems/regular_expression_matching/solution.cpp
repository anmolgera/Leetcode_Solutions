class Solution {
public:
    bool isMatch(string s, string p) {
    if(p.empty()){
        return s.empty();
    }    
     
    if(p.length()>=2 && p[1]=='*'){
        
     // a*b*c* or aaaabbbbcccc true
     // s = "aab", p = "c*a*b" true
     // "mississippi", p = "mis*is*p*." false
     // s = "aa", p = "a" false
        
     // either 0 times, n times aaya ho. In that case only increment 1 by 1.
        
    return isMatch(s,p.substr(2)) || !s.empty() && (s[0]==p[0] || p[0]=='.') && isMatch(s.substr(1),p);     
    }
        
    else return !s.empty() && (s[0]==p[0] || p[0]=='.') && isMatch(s.substr(1),p.substr(1));     
    
    }
};