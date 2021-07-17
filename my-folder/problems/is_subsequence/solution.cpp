class Solution {
public:
    bool isSubsequence(string s, string t) {
    int i =0;
    int j =0;
    for( i =0; i<t.length() && j<s.length(); i++){
     if(t[i]==s[j]){
         j++;
     }   
        
    }
        
    return j == s.length();
    }
};