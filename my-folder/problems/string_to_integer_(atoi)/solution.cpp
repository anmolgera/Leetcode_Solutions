class Solution {
public:
    int myAtoi(string s) {
    int sign =1;
    int i=0;
    while(i<s.length() && s[i]==' ')i++;
    if(s[i]=='-' || s[i]=='+'){
        if(s[i]=='-') sign *=-1;
        i++;
    }
    int ans =0;
   // INT_MAX = ans*10 + x%10;
    while(i<s.length() &&((s[i]-'0')>=0 && (s[i]-'0') <=9 )){
    int x = s[i]-'0';
    if(INT_MAX/10 <ans || (INT_MAX-x)/10 <ans) {
        
        if(sign ==1 ) return INT_MAX;
        else return INT_MIN;
    }    
        
    ans = ans*10 + x;
        i++;
    }
    return ans*sign;
    }
};