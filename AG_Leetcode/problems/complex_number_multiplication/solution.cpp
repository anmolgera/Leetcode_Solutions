class Solution {
public:
    
    pair<int,int> p(string a){
        
        int i =0;
        while(a[i]!='+'){
            i++;
        }
        
   pair<int,int> p1;
   p1.first  =  stoi(a.substr(0,i));
   p1.second =  stoi(a.substr(i+1));
        
     return p1;   
        
    }
    
    
    string complexNumberMultiply(string a, string b) {
     
        auto a1 = p(a);
        auto b1 = p(b);
        
        int ansreal = a1.first*(b1.first) - a1.second*(b1.second);
        int imgreal = a1.first*(b1.second) + a1.second*(b1.first);
        
        string res = to_string(ansreal)+ "+"+ to_string(imgreal)+"i"; 
        return res;
    }
};