class Solution {
public:
    const int mod = 1e9+7;
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
    int n = nums.size();
    vector<int> count(n,0);
    for(int i =0; i<requests.size(); i++){
        
        count[requests[i][0]]++;
        if(requests[i][1]+1<n) count[requests[i][1]+1]--;
        
        
    }
        
    for(int i =1; i<n; i++){
        count[i]+=count[i-1];
    }
    sort(count.begin(),count.end());
    sort(nums.begin(),nums.end());
    long long int res =0;
    for(int i =0; i<n; i++){
    res = (res + ((long)count[i]*nums[i])%mod)%mod;    
    }
    return res%(mod);
    }
};