class Solution {
public:
    
    bool ispallindrome(string &s, int i, int j){
        
       
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            
            i++;
            j--;
        }
        
        return true;
        
    }
    
    void backtrack(vector<vector<string>>&v, vector<string>&comb, string &s, int start){
        
        if(start==s.length()){
            vector<string> a = comb;
            v.push_back(a);
            return;
        }
        
        for(int i = start; i<s.length(); i++){
            
            if(ispallindrome(s,start,i)){
             
             
             comb.push_back(s.substr(start,i-start+1)); //Length would be +1. Ex start = 2, i =4. Len would be 4-2+1. hence i+1
            // cout<<comb[comb.size()-1]<<endl;
             backtrack(v,comb,s,i+1);
             comb.pop_back();
                
            }
        }
        
        //return;
    }
        
        
        vector<vector<string>> partition(string s) {
       
             vector<vector<string>> v;
             vector<string> comb;
             backtrack(v,comb,s,0);
             return v;
        
        
        
        
        
    
         }
    };