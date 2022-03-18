class Solution {
public:
    string removeDuplicateLetters(string s) {
    stack<char> st;
    int count[26] = {0};
    int vis[26] ={0};
    for(int i =0; i<s.length(); i++){
        
        count[s[i]-'a']++;
    }
    string res ="";    
    for(int i =0; i<s.length(); i++){
        
        if(vis[s[i]-'a']>0){
            
            count[s[i]-'a']--;
            continue;
        }
        
        else {
        count[s[i]-'a']--;
        while(!st.empty() && count[st.top()-'a']>0 && s[i]<st.top()){
            //count[st.top()-'a']--;
            vis[st.top()-'a'] = 0;
            st.pop();
            
            
            
        }
        
        st.push(s[i]);
        vis[s[i]-'a'] =1;
            
        }
        
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