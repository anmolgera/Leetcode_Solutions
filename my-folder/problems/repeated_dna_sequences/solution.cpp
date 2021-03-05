class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
    if(s.length()<10){
        return {};
    }
    /*if(s.length()==10){
        return {s};
    }*/
    map<string,int> mp;    
    for(int i =0; i<=s.length()-10; i++ ){
    string r = "";
    for(int j =i; j<i+10; j++){
        r+=s[j];
    }
     mp[r]++;   
    }
    vector<string> v;    
    for(auto i : mp){
        if(i.second>1){
            v.push_back(i.first);
        }
    }
    return v;
    }
};