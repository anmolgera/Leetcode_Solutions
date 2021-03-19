class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
    stack<pair<int,int>> st;
    vector<int> v;
    for(int i = T.size()-1; i>=0; i--){
        
    int val = T[i];
    while(!st.empty() && val>=st.top().first){
        st.pop();
    }
    
    if(st.empty()){
        v.push_back(0);
    }
    else v.push_back(st.top().second-i);
    st.push({T[i],i});
    }
    reverse(v.begin(),v.end());
    return v;
    }
};