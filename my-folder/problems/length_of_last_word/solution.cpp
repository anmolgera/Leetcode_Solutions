class Solution {
public:
    int lengthOfLastWord(string s) {
    int len = s.length()-1;
    int tail =len;
    len =0;
    
    while(tail>=0 && s[tail]==' ') tail--;
    while(tail>=0 && s[tail]!=' ') { len++ ; tail--;}
    return len;


    
    }
};