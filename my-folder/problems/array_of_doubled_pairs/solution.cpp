class Solution {
public:
    
    static bool compare(int a, int b){
        
        return abs(a)<abs(b);
    }
    bool canReorderDoubled(vector<int>& A) {
        
      map<int,int> mp;
      for(int i =0; i<A.size(); i++){
          mp[A[i]]++;
      }
     
        sort(A.begin(),A.end(),compare);
      for(int i =0; i<A.size(); i++){
          if(mp[A[i]]==0){
              continue;
          }
          
          else if(mp[2*A[i]]==0){
              return false;
          }
          
          mp[A[i]]--;
          mp[2*A[i]]--;
      }
       
        return true;
        
        
        
    }
};