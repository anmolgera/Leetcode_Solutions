class Solution {
public:
    int superpalindromesInRange(string L, string R) {
        vector<long long> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        for(int i = 1; i <= 8000; i++){
            string l = to_string(i),  r = l; reverse(r.begin(), r.end());
            v.push_back(stoll(l+r));
            for(int d = 0; d < 10; d++)
                v.push_back(stoll(l + to_string(d) + r));
        }
        int ans = 0;
        for(auto c: v){
            long long c2 = c*c;
            if( c2>= stoll(L) &&  c2<= stoll(R) && isPallindrome(to_string(c2))) ans++;
        }
        return ans;
        
    }
    bool isPallindrome(string s){
       for(int i = 0, j = s.size()-1; i <= j; i++,j--) 
           if(s[i]!= s[j]) return false;
        return true;
    }
    
};