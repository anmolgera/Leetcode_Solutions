class Solution {
public:
    
    //[2,3,1,1,4]
    int jump(vector<int>& nums) {
    
    int level =0;
    int curmax =0;
    int glbmax =0;
    for(int i =0; i<nums.size()-1 ; i++){
        
       glbmax = max(glbmax,i+nums[i]);
       if(i==curmax){       //q.size();
           level++;
           curmax = glbmax;
       }
        
    }
    
    return level;
    
   
    }
    
   // [2,3,1,1,4]
   //curmax =0;
   //glbmax =4;
   //i =3;
   //curmax = 4;
   //level =2;
    
  
   
   
   
    
    
    
    
    
    
};