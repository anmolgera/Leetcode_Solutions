class Solution {
public:
    int nextGreaterElement(int n) {
        
        auto digits = to_string(n);
        next_permutation(digits.begin(),digits.end());
        auto num = stoll(digits);
        if(num>INT_MAX || num<=n ){
            return -1;
        }
        
        else return num;
    
    
    
    }
};