class Solution {
public:
    bool isRobotBounded(string instructions) {
        int cur[2][2] ={{0},{0}};
        int dir[4][2] ={{1,0},{0,1},{-1,0},{0,-1}};
                     // N    E/R    S      W/L
        int d =0;
        for(int i =0; i<instructions.size(); i++){
        
        if(instructions[i]=='G'){
        cur[0][0] += dir[d][0];
        //cur[0][0]%=4;
        cur[0][1] += dir[d][1];
        //cur[0][1]%=4;
        }   
        else if(instructions[i]=='L'){
            d = (d+3)%4;
        }
        else {
            d = (d+1)%4;
            
        }
            
        }
       //if(cur[0][0] ==0 && cur[0][1]==0) return true;
       if(d==0 && !(cur[0][0] ==0 && cur[0][1]==0) ) return false;
       else return true;
        
    }
};