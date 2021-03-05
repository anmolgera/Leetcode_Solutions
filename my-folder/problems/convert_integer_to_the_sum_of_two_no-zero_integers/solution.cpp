class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
    int a =1;
    while(a<n) {
        if((to_string(a) + to_string(n-a)).find('0')==string::npos){
            return {a,n-a};
        }
        a++;
    }
    return {};
    }
};