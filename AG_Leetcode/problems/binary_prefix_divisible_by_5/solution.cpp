class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> v;
        int sum =0;
         for(int i =0; i<A.size(); i++){
             sum = (2*sum+A[i])%5;
             v.push_back(sum==0);
             
             
             
         }
        return v;
    }
};