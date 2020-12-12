class Solution {
public:
    int longestOnes(vector<int>& A, int k) {
        int i =0;
        int j;
        for(j =0; j<A.size(); j++)
        {
            if(A[j]==0){
                k--;
            }
            
            if(k<0){
                if(A[i]==0){
                    k++;

                }
                
                i++;
            }
            
        }   
        return j-i;
    }  
        
};