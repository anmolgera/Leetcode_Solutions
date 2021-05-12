class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
    unordered_map<string,int> mp;
    vector<int> indices;
    for(int i =0; i<words.size(); i++){
        mp[words[i]]++;
    }
    int n = s.length();
    int m = words.size();
    int len = words[0].length();
    if(n==0 || m==0) return indices;
    for(int i =0; i<=n-m*len; i++){
        int j =0;
        unordered_map<string,int> seen;
        for(; j<m; j++){
         
        string res = s.substr(i+j*len,len);
        if(mp.find(res)!=mp.end()){
            seen[res]++;
            if(seen[res]>mp[res]){
                break;
            }
        }
        else break;
        
        }
        
        if(j==m) indices.push_back(i);
    }
    return indices;
    }
};