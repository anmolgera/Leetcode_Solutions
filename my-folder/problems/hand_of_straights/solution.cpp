class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int W) {
        
        map<int,int> mp;
        
        for(int i =0; i<hand.size(); i++){
            mp[hand[i]]++;
            
            
            
            
        }
        
        
        for(auto i : mp){
            
           if(mp[i.first]>0){
               
                for(int j = W-1; j>=0; j--){
                    
                    mp[i.first+j]-=mp[i.first];
                    if(mp[i.first+j]<0){
                        return false;
                    }
                }
               
               
               
           } 
            
            
        }
        
        
        return true;
        
        
    }
};