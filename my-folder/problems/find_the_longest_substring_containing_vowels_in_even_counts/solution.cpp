class Solution {
public:
    int findTheLongestSubstring(string s) {
  
    map<int,int> mp;
    mp[0] =-1;
        
    string ans ="aeiou";
    int mask =0;
    int result= 0;
    for(int i =0; i<s.length(); i++){
    
    for(int j =0; j<5; j++){
        
        if(s[i]==ans[j]){
            
               mask = mask^(1<<j);    
            
        }
    }
        
    if(mp.find(mask)==mp.end()){
        mp[mask] =i;
    }
    
    result = max(result,i-mp[mask]);
    }
        
    return result;    
    }
};