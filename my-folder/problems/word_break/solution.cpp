class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
    unordered_map<string,int> mp;
    
    for(int i =0; i<wordDict.size(); i++){
        mp[wordDict[i]]++;
    }    
        
        
    if(wordDict.size()==0) return true;
    int n = s.length();
    vector<bool> dp(n+1,false);
    dp[0] = true;
    for(int i =1; i<=s.length(); i++){
    for(int j = i-1; j>=0; j--){
    
    if(dp[j]==true){
        
    string ans  = s.substr(j,i-j);
    cout<<ans<<endl;
    if(mp.find(ans)!=mp.end()){
       dp[i] = true;
        break;
    }
    
        
        
    }
        
        
    }    
    }
        
    return dp[n];
    }
};