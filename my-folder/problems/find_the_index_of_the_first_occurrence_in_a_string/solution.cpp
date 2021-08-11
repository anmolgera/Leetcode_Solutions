class Solution {
public:
    int strStr(string haystack, string needle) {
    if(haystack==needle) return 0;
    for(int i=0; i<haystack.length(); i++){
        int j;
        for(j =0; j<needle.length(); j++){
            if(needle[j]!=haystack[i+j]) break;
        }
        
        if(j == needle.length()) return i;
        if(i+j==haystack.length()) return -1;
        
    }
    return -1;
    }
};