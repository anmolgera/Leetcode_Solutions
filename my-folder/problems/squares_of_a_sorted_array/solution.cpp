class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
      int l =0;
      int r = A.size()-1;
      
      vector<int> v;
      
      while(l<r){
          if(abs(A[l])<abs(A[r])){
              v.push_back(  A[r]*A[r]);
              r--;
          }
          
          else {
               v.push_back(  A[l]*A[l]);
              l++;
          }
      }
    v.push_back(A[l]*A[l]);
    reverse(v.begin(),v.end());
    return v;
    }
};