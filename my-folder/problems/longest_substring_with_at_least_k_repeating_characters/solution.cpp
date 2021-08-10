class Solution {
public:
    
    
    int func(string s, int k, int tunique){
        
    int end =0;
    int start =0;
    int currunique=0;
    int numk =0;
        
    vector<int>v(26,0);
    int mx =0;
    
    while(end<s.length()){
        
        if(v[s[end]-'a']==0) currunique++;
        v[s[end]-'a']++;
        if(v[s[end]-'a']==k) numk++;
        end++;
        
        while(currunique>tunique){
            
            if(v[s[start]-'a']==k) numk--;
            v[s[start]-'a']--;
            if(v[s[start]-'a']==0) currunique--;
            start++;
            
        }
        
        if(numk==currunique) mx = max(mx,end-start);
        
        
    }
    
        
        
    return mx;    
        
        
        
    }
    
    
    
    int longestSubstring(string s, int k) {
    int n = s.size();
    int cnt =0;
    for(int i =1; i<=26; i++){
        cnt = max(cnt,func(s,k,i));
    }
    return cnt;
    }
};