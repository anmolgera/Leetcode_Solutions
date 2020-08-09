class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        
        int count =0;
        
        for(int i = bits.size()-2; i>=0 && bits[i]==1; i--){
            
            
            count++;
        }
        
        
        if(count%2){
            
            return false;
        }
        
        return true;
        
    }
};