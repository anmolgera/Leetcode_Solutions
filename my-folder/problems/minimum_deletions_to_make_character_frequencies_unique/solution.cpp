class Solution {
public:
    int minDeletions(string s) {
    
    vector<int> v(26,0);
    
    for(int i =0; i<s.length(); i++){
        v[s[i]-'a']++;
    }
    
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    
    unordered_set<int> st;
    int res =0;
    for(int i =0; i<26; i++){
        for(;v[i]>0 && st.find(v[i])!=st.end(); v[i]--){
            res++;
        }
        st.insert(v[i]);
    }
    return res;
    }
};