class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        
        int count =0;
        while(a|| b || c){
            int a_bit = a&1;
            int b_bit = b&1;
            int c_bit = c&1;
            
            if((a_bit||b_bit)!=c_bit){
                if(a_bit ==1 && b_bit==1){
                    count+=2;
                }
                
                else {
                    count+=1;
                }
            }
            
            a = a>>1;
            b = b>>1;
            c = c>>1;
            
        }
        return count;
    }
};