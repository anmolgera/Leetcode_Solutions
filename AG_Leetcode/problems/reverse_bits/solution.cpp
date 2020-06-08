class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       uint32_t ret =0;
        uint32_t power =31;
        
        while(n!=0){
            
            ret = ret += (n&1)<<power;
            n = n>>1;
            power--;
            
            
            
            
            
        }
        
      return ret;  
        
    }
};