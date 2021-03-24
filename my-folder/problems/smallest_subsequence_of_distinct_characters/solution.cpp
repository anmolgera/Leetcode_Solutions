class Solution {
public:
    string smallestSubsequence(string s) {
     stack<char> st;
      int count[26] ={0};
     for(int i =0; i<s.length(); i++){
         
         //st.push(s[i]);
         count[s[i]-'a']++;
     }
        
   
     int vis[26] ={0};
    
     for(int i =0; i<s.length(); i++){
         
         if(vis[s[i]-'a']){
             count[s[i]-'a']--;
             continue;
         }
         
         count[s[i]-'a']--;
         while(!st.empty() && count[st.top()-'a']>0 && s[i]<st.top()){
             vis[st.top()-'a'] =0;
             st.pop();
         }
         
         st.push(s[i]);
         vis[s[i]-'a'] =1;
     }
    string r ="";
    while(!st.empty()){
        r+=st.top();
        st.pop();
    }
        
    reverse(r.begin(),r.end());
    return r;
    
    }
};