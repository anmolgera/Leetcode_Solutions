class Solution {
public:
    int numDecodings(string s) {
        
        
           int n = s.size();
    if (n == 0 || s[0] == '0') return 0;
    if (n == 1) return 1;
    int pre2 = 1, pre1 = 1;
    int cur;
    for (int i = 1; i < n; ++i) {
        cur = 0;
        int first = (s[i] - '0');
        int second = stoi(s.substr(i - 1, 2));
        if (1 <= first && first <= 9)
            cur += pre1;
        if (10 <= second && second <= 26)
            cur += pre2;
        pre2 = pre1;
        pre1 = cur;
    }
    return cur; 
        
        
        
    }
};