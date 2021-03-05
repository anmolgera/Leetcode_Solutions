class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
     if(p.length()>s.length()){
         return {};
     }    
     vector<int> v (256,0);
     for(auto i : v){
         i =0;
     }
     vector<int> m(256,0);
     for(auto i : m){
         i =0;
     }   
     for(int i =0; i<p.length(); i++){
         m[p[i]]++;
         
         //cout<<m[p[i]];
     }
    
     //cout<<endl;
     vector<int> v1;
     for(int i =0; i<=s.length()-p.length(); i++){
         v = m;
         
         bool flag = true;
         for(int j =i; j<i+p.length(); j++){
         
               v[s[j]]--;
           
         }
         
         for(auto i : v){
             //cout<<i;
            if(i!=0){
                flag = false;
            }} //cout<<endl;
         if(flag){
             v1.push_back(i);
         }
        
     }
        
      return v1;  
        
        
        
        
    }
};