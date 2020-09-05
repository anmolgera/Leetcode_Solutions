class Solution {
public:
    
    #define m 1000000007
    #define ll long long
    int numWays(string s) {
        
        ll count =0;
        for(int i =0; i<s.length(); i++){
            
             count += (s[i]-'0')==1;
            
            
            
        }
        
        if(count%3){
            
            return 0;
        }
        
        
        else {
            
            ll sum = count;
             ll countsumby3 =0;
   ll count2sumby3 =0;
 
   ll s1 =0;
 
   for(int i =0; i<s.length()-1; i++){
 
 
      s1 +=s[i]-'0';
      s1 %=m;
 
     
 
      if(s1 == 2*sum/3){
 
      count2sumby3 +=countsumby3%m;
      count2sumby3 %=m;
 
      }
 
 
 
      if(s1 == sum/3){
 
          
countsumby3 ++;
countsumby3 %=m;
 
      }
 
 
   }

        return           count2sumby3%m;

            
        }
    }
};