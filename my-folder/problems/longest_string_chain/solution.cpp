class Solution {
public:
    static bool compare(const string &s1, const string &s2){
        
        return s1.length()<s2.length();
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),compare);
        map<string,int> mp;
        int res =0;
        for(int i =0; i<words.size(); i++){
            
            string s =words[i];
            for(int j =0; j<s.length(); j++){
                mp[words[i]] = max(mp[words[i]],mp[words[i].substr(0,j)+words[i].substr(j+1)]+1);
                res = max(res,mp[words[i]]);
            }
        }
        
        
        return res;
        
        
        
    }
};