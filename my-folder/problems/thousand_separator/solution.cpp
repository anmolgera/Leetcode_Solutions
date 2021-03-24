class Solution {
public:
    string thousandSeparator(int n) {
    string res ="";
    string s = to_string(n);
    for(int i =0; i<s.length(); i++){
        if(i>0 && (s.size()-i)%3==0){
            res+=".";
        }
        res+=s[i];
    }
        
    return res;
    }
};