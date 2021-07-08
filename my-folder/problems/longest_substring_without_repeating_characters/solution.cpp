class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int i =0;
    int j =0;
    int mx =0;    
    unordered_set<int> st;
    while(j<s.length()){
        
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