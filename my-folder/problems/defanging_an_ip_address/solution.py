class Solution:
    def defangIPaddr(self, address: str) -> str:
        res =""
        for i in range(0,len(address)):
            if(address[i]=='.'):
                res+='[.]'
            else:
                res+=address[i]
            
        return res;