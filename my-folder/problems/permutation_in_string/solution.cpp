class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        vector<int> v(128,0);
        vector<int> m(128,0);
        for(int i =0; i<s1.length(); i++){
            
            v[s2[i]]++;
            m[s1[i]]++;
        }
        
        if(v==m){
            return true;
        }
        int n = s1.length();
        for(int i = s1.length(); i<s2.length(); i++){
           v[s2[i]]++;
           v[s2[i-n]]--;
           if(v==m){
               return true;
           }
            
        }
        
        return false;
        
    }
};