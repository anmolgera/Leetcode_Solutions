class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> mp;
        for(int i =0; i<s.length(); i++){
             mp[s[i]]++;
        }
        char ch = '#';
        for(auto i : mp){
            cout<<i.first<<" ";
            if(i.second==1){
                ch = i.first;
                //break;
            }
        }
        cout<<endl;
        if(ch== '#'){
            return -1;
        }
        
        else {
            
             for(int i =0; i<s.length(); i++){
                 if(ch==s[i]){
                     return i;
                 }
             }
            
            
        }
        
        return 0;
    }
};