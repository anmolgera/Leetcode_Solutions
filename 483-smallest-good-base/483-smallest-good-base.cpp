typedef unsigned long long ull;
class Solution {
public:
    string smallestGoodBase(string n1) {
        ull n=stoull(n1);
        ull mn=2,mx=log2(n*1.0)+1;
        for(ull i=mx;i>=mn;i--)
        {
            ull k=pow(n,1.0/i);
            if(k<2)continue;
            ull sum=0,prod=1;
            for(ull j=1;j<=i+1;j++)
            {
                sum+=prod;
                prod*=k;
            }
            if(sum==n)
                return to_string(k);
        }
        return to_string(n-1);
    }
};