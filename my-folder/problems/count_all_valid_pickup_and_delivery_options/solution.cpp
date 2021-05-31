class Solution {
public:
    const int mod =1e9+7;
    int countOrders(int n) {
    long res =1;    
    for(int i =1; i<=n; i++){
        res = res*((long)(i*2-1)*(i))%mod;
    }
    return res;
    }
};