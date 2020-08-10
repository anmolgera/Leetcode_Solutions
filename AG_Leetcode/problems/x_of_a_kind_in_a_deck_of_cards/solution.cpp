class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        for(int i =0; i<deck.size(); i++){
            
            mp[deck[i]]++;
        
        }
       
        int res =0;
       for(auto i : mp){
           
           res = __gcd(res,i.second);
       } 
     return res>1;   
    }
};