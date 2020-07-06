
 #include<bits/stdc++.h>
    using namespace std;
class Solution {
public:
   
    int maxNumberOfBalloons(string text) {
        
        unordered_map<char,int>mp;
        
        
      
        
        
        
        for(char ch : text){
            
    
   mp[ch]++;
        
    }
            
            
            
        
        
      //  mp['l'] = mp['l']/2;
        //mp['o'] = mp['o']/2;
        
          int x = mp['b'];
          int y = mp['a'];
          int z = mp['l'];
          int c = mp['o'];
          int d = mp['n'];
        
        return min({x,y,z/2,c/2,d});
        
        
        
    }
};