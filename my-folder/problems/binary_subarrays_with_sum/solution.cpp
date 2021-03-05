class Solution {
public:
    int numSubarraysWithSum(vector<int>& A, int S) {
    int sum =0;
    unordered_map<int,int> mp;
    mp[0] =1;
    int cnt =0;
    for(int i =0; i<A.size(); i++){
    sum+=(A[i]);
    //cout<<s<<endl;
    cnt+=mp[sum-S];
    mp[sum]++;
    
    
    }
    return cnt;
    }
};