class Solution {
public:
    string removeKdigits(string num, int k) {
        
        
        
        while(k>0){
            
         int i =0; 
         int n = num.size();
         while(i+1<n && num[i]<=num[i+1]) i++;
         num.erase(i,1);
         k--;
            
            
            
        }
        
        string res ="";
        bool flag = false;
        for(int i =0; i<num.length(); i++){
            
            if(num[i]!='0'){
                flag = true;
            }
            
            if(flag){
                //break;
                res+=num[i];
            }
        }
        
        if(res.length()==0){
            return "0";
        }
        return res;
        
    }
};