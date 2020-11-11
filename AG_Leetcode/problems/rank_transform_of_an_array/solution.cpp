class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
      unordered_map<int,int> mp;
        
      vector<int> A(arr);
      sort(A.begin(),A.end());
      int x =1;
      
      for(int i =0; i<A.size(); i++){
          
         if(mp.count(A[i])==0){ mp[A[i]] = x;
          x++;}
      }
      
      for(int i =0; i<A.size(); i++){
          
          A[i] = mp[arr[i]];
      }
        
     return A;
        
    }
};