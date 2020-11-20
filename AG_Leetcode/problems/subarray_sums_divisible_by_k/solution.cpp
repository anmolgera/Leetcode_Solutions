class Solution {
public:
    int subarraysDivByK(vector<int>& A, int k) {
        unordered_map<int,int> mp;
        
        int sum =0;
        int count =0;
        mp[0] =1;
        for(int i =0; i<A.size(); i++){
           
         sum=(sum + A[i]%k+k)%k;
         count+=mp[sum]++;
           
       }
        return count;
    }
};