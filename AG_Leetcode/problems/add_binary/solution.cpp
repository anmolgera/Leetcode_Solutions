class Solution {
public:
    string addBinary(string a, string b) {
        
    
        
        int n = a.length();
        int m = b.length();
        
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        string ans ="";
        int carry =0;
       
        
        for(int i =0; i<max(n,m); i++){
             int sum =0;
            if(i<n){
                
                sum+=a[i]-'0';
            }
            
            if(i<m){
                
                sum +=b[i]-'0';
            }
            
            sum+=carry;
            carry = sum/2;
            sum=sum%2;
            
            ans+=sum+'0';
            
            
            
            
            
            
            
        }
        
        if(carry){
            
            ans+='0'+carry;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};