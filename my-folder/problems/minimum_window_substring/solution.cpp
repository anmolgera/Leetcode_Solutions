class Solution {
public:
    string minWindow(string s, string t) {
      
        vector<int> v(128,0);
        for(int i =0; i<t.length(); i++){
            v[t[i]]++;
        }
        int start =0;
        int end =0;
        int size = s.size();
        int min_len = INT_MAX;
        int finstart =0;
        int finend =0;
        int counter = t.length();
        while(end<size){
            
            if(v[s[end]]>0){
                counter--;
            }
            
            v[s[end]]--;
            end++;
            
            while(counter==0){
                
                if(min_len > end-start){
                    min_len = end-start;
                    finstart = start;
                    finend = end;
                    
                }
                
               v[s[start]]++;
              
                if(v[s[start]]>0) counter++;
                 start++;
                
            }
            
            
            
            
        }
        
        if(min_len == INT_MAX) return "";
        else return s.substr(finstart, min_len);
    }
};