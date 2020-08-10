class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int k) {
        
        
        vector<int> v;
        int i = A.size()-1;
        int carry =0;
        
        while(i>=0 || k!=0){
            int sum =0;
            
            if(i>=0){
                
                sum +=A[i];
                i--;
            }
            if(k!=0){
                
                sum+=(k%10);
                k = k/10;
            }
          sum += carry;
          carry = sum/10;
          sum = sum%10;
         
          v.push_back(sum);
          
            
            
        }
        
        if(carry!=0){
            
            v.push_back(carry);
        }
        
      reverse(v.begin(),v.end());
        return v;
    }
};