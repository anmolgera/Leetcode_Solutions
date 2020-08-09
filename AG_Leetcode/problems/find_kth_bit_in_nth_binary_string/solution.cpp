class Solution {
public:
    
    string Invert(string &s ){
        
        
        
        for(int i =0; i<s.length(); i++){
        
        if(s[i]=='0'){
            
            s[i]='1';
        }
        
        
        else s[i]='0';
        
        }
        reverse(s.begin(),s.end());
        return  s;
        
    }
    
    
    char findKthBit(int n, int k) {
        
        string res ="0";
        
        for(int i = 1; i<n; i++){
            
            string inv = res;
            res+='1'+ Invert(inv);
            
            
            
        }
        
       
   //  cout<<res<<endl;   
     return res[k-1];
        
    }
};