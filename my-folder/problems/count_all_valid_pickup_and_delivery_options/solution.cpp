class Solution {
public:
    int countOrders(int n) {
    long long MODULO = 1e9 + 7;
        long long ans = 1;
        for (int i = 2; i <= n; i++) {
            int spaceNum = (i-1)*2 + 1;
            ans *= spaceNum * (spaceNum + 1) / 2;
            ans %= MODULO;
        }
        return (int) ans;    
    }
};