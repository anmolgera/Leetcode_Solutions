class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        int x =0;
        int n = encoded.size()+1;
       for(int i =1; i<=n; i++){
           x^=i;
       }
        
       for(int i =0; i<encoded.size(); i++){
           if(i%2==1){
               x^=encoded[i];
           }
       }
        
      vector<int> v;
      v.push_back(x);
      for(int i =0; i<encoded.size(); i++){
          v.push_back(v[i]^encoded[i]);
      }
     return v;
    }
};