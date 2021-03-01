class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int cnt =0;
        map<string,set<string>> mp;
        for(int i =0; i<emails.size(); i++){
            
           
                string s = emails[i];
                int j =0;
                string ans1 ="";
                string ans2 = ""; 
               // it can contain + or it cannot
                while(s[j]!='+' && s[j]!='@'){
                    if(s[j]!='.'){
                    ans1+=s[j];
                    }
                    j++;
                }
               // after +
               while( s[j]!='@'){
                   
                    j++;
               }
               j++;
              //after @
              for(; j<s.size(); j++){
                 ans2+=s[j]; 
              }
           
           cout<<ans1<<" "<<ans2<<endl;
            mp[ans2].insert(ans1);   
            
        }
        for ( auto i : mp){
            cnt+=i.second.size();
        }
        return cnt;
    }
};