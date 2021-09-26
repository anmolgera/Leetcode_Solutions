class Solution:
    def longestPalindrome(self, s: str) -> str:
        ans =""
        for i in range(len(s)):
            tmp = self.func(s,i,i)
            if(len(tmp)>len(ans)):
                ans = tmp
            tmp = self.func(s,i,i+1)
            if(len(tmp)>len(ans)):
                ans = tmp
        
        return ans
    
    def func(self, s, l, r):
        n = len(s)
        while l>=0 and r<n and s[l] == s[r] :
            l-=1
            r+=1
        return s[l+1:r]
        