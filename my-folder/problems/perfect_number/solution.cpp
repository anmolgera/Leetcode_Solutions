class Solution {
public:
    bool checkPerfectNumber(int num) {
        /*int n = num+1;
        int a[n+1];
        for(int i =0; i<=n; i++){
            a[i] =1;
            
        }
        
        for(int i =2; i<=n; i++){
          for(int j = i+i; j<=n; j+=i){
              
              a[j]+=i;
          }  
            
            
        }*/
        
        if(num==1){
            
            return false;
        }
        int sum =1;
        for(int i =2; i*i<=num; i++){
            if(num%i==0 && num/i!=i) {sum+=i;
                           sum+=num/i;
                          }
            else if(num%i==0 && num/i==i){
                sum+=i;
            }
        }
        
       /* for(int i =2; i<=n; i++){
            cout<<a[i]<<" ";
        }
        
        cout<<endl;
        cout<<a[num]<<endl;*/
        if(sum==num){
            return true;
        }
        return false;
    }
};