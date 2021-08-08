class Solution {
public:
    
    map<string,bool> mp;
    bool isScramble(string s1, string s2) {
    if(s1==s2) return true;
    int cnt[26] ={};
    
    string s = s1+'-'+s2;
    if(mp.find(s)!=mp.end()) return mp[s];
    if(s1.length()!=s2.length()) return false;
    for(int i =0; i<s1.length(); i++){
        cnt[s1[i]-'a']++;
        cnt[s2[i]-'a']--;
    }
        
    for(int i=0; i<26; i++)
        {
            if(cnt[i]!=0)
                return false;
        }
    int len = s1.length();
    bool flag = false;
    for(int i =1; i<=len-1; i++){
        if(isScramble(s1.substr(0,i),s2.substr(0,i))&& isScramble(s1.substr(i),s2.substr(i))) flag =  true; 
        if(isScramble(s1.substr(0,i),s2.substr(len-i))&& isScramble(s1.substr(i),s2.substr(0,len-i))) flag = true; 
    }
    mp[s] = flag;
    return flag;
    }
};