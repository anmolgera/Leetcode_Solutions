class Solution {
public:
    string truncateSentence(string s, int k) {
    map<string,int> mp;
    
    int i =0;
    int n = s.length();
    vector<string> v;
    string ans = "";
    while(i<n){
        
        if(s[i]!=' ') ans+=s[i];
        else {
            v.push_back(ans);
            ans ="";
        }
        
        i++;
        
        
    }
    v.push_back(ans);
    
    string a="";
    for(int i=0; i<k; i++){
        a+=v[i];
        a+=" ";
    }
    a.pop_back();    
    return a;
   
    }
};