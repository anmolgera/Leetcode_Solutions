class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
    int n = s.length();
    vector<int> v(n,INT_MAX);
    map<char, vector<int>> mp;
    for(int i =0; i<s.length();  i++){
        mp[s[i]].push_back(i);
    }
        
    vector<int> v1;
    for(int j =0; j<s.length(); j++){
        
    char y = s[j];
        
    
    if(y==c){
        v1.push_back(0);
    }
    else {
        int m = INT_MAX;
        int id =-1;
        for(int k =0; k<mp[c].size(); k++){
            if(abs(mp[c][k]-j)<m){
              m = abs(mp[c][k]-j);
              id = j;
            }
            
        }
        
       v1.push_back(m); 
    }
        
    }
        
    
    return v1;    
    }
};