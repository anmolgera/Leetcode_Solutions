class Solution {
public:
    string lastSubstring(string s) {
        
      int n=s.length(),i=0,j=1,k=0;
        while(j+k<n)
        {
            if(s[i+k]==s[j+k]) k++; 
            else if(s[i+k]<s[j+k]) i=j++,k=0;
            else j+=k+1,k=0;
        }
        return s.substr(i);
    }
};