class Solution {
public:
    string addStrings(string num1, string num2) {
       int n = num1.length();
       int m = num2.length();
        
      reverse(num1.begin(),num1.end());
      reverse(num2.begin(),num2.end());
        
       int carry =0;
        string ans ="";
       for(int i =0; i<max(n,m); i++){
          int sum =0; 
          
           if(i<n){
               
               sum+=num1[i]-'0';
           }
           
           if(i<m){
               
               
               sum+=num2[i]-'0';
           }
           
          sum+=carry;
          carry = sum/10;
          sum=sum%10;
           
           ans+=sum+'0';
           
           
           
       } 
        
     if(carry){
         
         ans+=carry+'0';
     } 
        
  /*  int i=0;
    while(ans[i]=='0' && ans[i+1]){
        ans.erase(ans.begin());
    }*/
    reverse(ans.begin(),ans.end());
        return ans;
        
    }
};