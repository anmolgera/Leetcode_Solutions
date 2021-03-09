class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
    if(x+y<z){
        return false;
    }    
    else if(x==z || y==z || x+y ==z){
        return true;
    }
        
    else if(z%__gcd(x,y)==0){
        return true;
    }
    else return false;
    }
};