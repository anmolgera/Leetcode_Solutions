class Solution {
public:
    
    
   int atmost(vector<int> & A, int k){
       
       int i =0;
       int res =0;
       map<int,int> mp;
       for(int j =0; j<A.size(); j++){
           if(mp[A[j]]==0){
               k--;
           }
           
           mp[A[j]]++;
           
           while(k<0){
               
               mp[A[i]]--;
               if(mp[A[i]]==0) k++; 
               i++;
               
           }
           res+=j-i+1;
       }
       
       
       return res;
       
   }
    
    
    int subarraysWithKDistinct(vector<int>& A, int k) {
        return atmost(A,k)-atmost(A,k-1);
    }
};