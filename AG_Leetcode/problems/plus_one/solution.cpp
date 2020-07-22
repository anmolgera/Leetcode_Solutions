class Solution {
public:
    vector<int> plusOne(vector<int>& A) {
        
        
     int n = A.size();
        
     A[n-1] +=1;
        
        int c = A[n-1]/10;
        A[n-1] = A[n-1]%10;
        
        for(int i = n-2;i>=0; i--){
            
            
            if(c ==1){
                
                A[i] +=1;
                c = A[i]/10;
                A[i] = A[i]%10;
                
                
                
                
            }
            
            
            
            
            
            
        }
        
        if(c ==1){
            A.insert(A.begin(),1);
            
        }
        
        
        
        return A;
        
    }
};