class Solution {
public:
    vector<int> pathInZigZagTree(int label, int level =0) {
        
        while(1<<level <=label) level++;
        vector<int> res(level);
        
        //while(1<<level<=label) level++;
        
        
        for(; label>=1; label/=2, level--)
        {
            
            res[level-1] = label;
            label = (1<<(level-1)) + (1<<level)-1 - label;
            
            
            
        }
     
       return res; 
        
    }
};