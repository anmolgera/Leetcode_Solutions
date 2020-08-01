class Solution {
public:
    int countTriplets(vector<int>& A) {
        
        unordered_map<int,int> mp;
        
        for(auto a : A){
            
            for( auto b : A){
                
                
                mp[a&b]++;
                
            }
            
            
        }
        
        int count =0;
        for(auto a : A) {
            
            for(auto t : mp){
                
                
                if((t.first & a ) ==0){
                    
                    count +=t.second;
                }
                
            }
            
            
            
        }
        
     return count;   
    }
};