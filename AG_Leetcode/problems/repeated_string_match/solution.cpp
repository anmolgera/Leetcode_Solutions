class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        
        string s =a;
        for(int i =1; i<=b.length()/a.length() +2 ; i++, s+=a){
            
            if(s.find(b)!=string::npos){
                return i;
            }
        }
        
        return -1;
        
        
        
        
        
        
        
    }
};