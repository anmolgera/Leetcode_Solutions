class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        
        string res= "";
        
        
        for(int i= shifts.size()-2; i>=0; i--){
            
            
            shifts[i] = (shifts[i] + (shifts[i+1]%26))%26;
        }
        
        for(int i =0; i<shifts.size(); i++){
            
            res += ((S[i]-'a') + shifts[i]%26)%26 + 'a';
            
            
            
            
            
        }
        
        
        
        return res;
        
        
    }
};