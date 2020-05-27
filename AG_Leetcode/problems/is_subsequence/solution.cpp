class Solution {
public:
    bool isSubsequence(string s, string t) {
        
    int slen =s.length(); int idx =0; int tlen = t.length();
        
for(int i =0; idx<slen && i <tlen ; i++){
    
    if(t[i]==s[idx]){
        idx++;
    }
    
    
    
}

        return idx == slen;
    }
};