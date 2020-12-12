class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        vector<int> v(26,0);
        vector<int> v1(26,0);
        for(int i =0; i<allowed.length(); i++){
            
            v[allowed[i]-'a']++;
        }
        int cnt =0;
        for(int i =0; i<words.size(); i++){
            
            string s = words[i];
            map<char,int> mp;
            for(int i =0; i<s.length(); i++){
                mp[s[i]]++;
            }
            
            s = "";
            for(auto i : mp){
                s+=i.first;
            }
            cout<<s<<endl;
            v1  = v;
            
        bool flag = true;
        for(int i =0; i<s.length(); i++){
            
            v1[s[i]-'a']--;
            if(v1[s[i]-'a']<0){
                flag = false;
            }
        }
            if(flag){
                cnt++;
            }
         /*bool flag = true;
          for(int i =0; i<26; i++){
              
              v[i]-=v1[i];
              if(v[i]<0){
                 flag = false; 
              }
          }
            if(flag){
                cnt++;
            }*/
            
        }
        return cnt;
    }
};