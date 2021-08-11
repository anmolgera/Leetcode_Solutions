class Solution {
public:
    bool repeatedSubstringPattern(string s) {
    return (s+s).substr(1,2*s.length()-2).find(s)!=-1;   
    }
};