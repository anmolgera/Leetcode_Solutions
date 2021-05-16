class Solution {
public:
    string getSmallestString(int n, int k) {
     
    string res = string(n,'a');
    k-=n;
    while(k>0 && n>0){
        n--;
        res[n] += min(25,k);
        k-=min(25,k);
    }
        
    return res;
        
    }
};