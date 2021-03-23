class Solution {
public:
    string removeDuplicates(string s, int k) {
    
    stack<pair<char,int>> st;
    for(int i =0; i<s.length(); i++){
        
        if(st.empty() || st.top().first!=s[i]){
            st.push({s[i],0});
        }
        
        st.top().second++;
        if(st.top().second==k){
            st.pop();
        }
    }
    string res ="";
    while(st.size()){
    
    auto i = st.top();
    //res+=string(i.second,i.first);
    for(int j =0; j<i.second; j++){
        res+=i.first;
    }
    st.pop();
    
    }
        
    reverse(res.begin(),res.end());
    return res;
        
    }
};