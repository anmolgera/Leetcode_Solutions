class Solution {
public:
 int mod = 1e9+7;
    int threeSumMulti(vector<int>& arr, int target) {
    int cnt =0;
    map<int,long> mp;
    for(int i =0; i<arr.size(); i++)
    {
        mp[arr[i]]++;
    }
        
    for(auto it : mp){
        for(auto it1 : mp){
            int i = it.first;
            int j = it1.first;
            int k = target-i-j;
            if(!mp.count(k)){
                continue;
            }
            if(i==j && j==k){
                cnt+=((mp[i])*(mp[i]-1)*(mp[i]-2)/6)%mod;
                cnt%=mod;
            }
            
            else if(i==j && j!=k){
                cnt += (mp[i]*(mp[i]-1)*(mp[k])/2)%mod;
                cnt%=mod;
            }
            
            else if(i<j && j<k) {
                cnt+=(mp[i]*mp[j]*mp[k])%mod;
                cnt%=mod;
            }
        }
    }
    return cnt%mod;
    }
};