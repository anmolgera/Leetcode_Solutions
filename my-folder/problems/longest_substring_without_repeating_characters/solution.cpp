class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     vector<int> c (256,-1);
     int m =0;
     int mx =0;
     //int j =0;
     for(int i =0; i<s.length(); i++){
         m = max(m,c[s[i]] +1);
         c[s[i]] =i;
         mx = max(mx,i-m+1);
         
     }
    return mx;
    }
};