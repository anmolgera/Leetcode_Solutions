class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0;
        int j =0;
        int n = s.length();
        set<int> st;
        int mx =0;
        while(i<n && j<n){
            
            if(st.find(s[j])==st.end()){
                
               st.insert(s[j]);
                j++;
                mx = max(mx,j-i);
                
                
            }
            
           else {
               
               st.erase(s[i]);
               i++;
           } 
            
            
        }
        return mx;
        
    }
};