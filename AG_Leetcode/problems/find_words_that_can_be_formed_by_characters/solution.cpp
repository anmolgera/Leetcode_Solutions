class Solution {
public:
    
    bool check(string s, string chars){
        
        
        for(int i =0; i<s.length(); i++)
        {
            
            if(chars.find(s[i])==string::npos){
               
                return false;
            }
            
            else  chars.erase(chars.begin()+chars.find(s[i]));
            
            
        }        
        
        
        return true;
        
    }
    
    
    int countCharacters(vector<string>& words, string chars) {
        
        
        
        int sum =0;
        for(int i=0; i<words.size(); i++){
            
            
            if(check(words[i],chars)){
                
                sum +=words[i].length();
                
            }
            
            
            
            
            
            
        }
        
        return sum;
        
    }
};