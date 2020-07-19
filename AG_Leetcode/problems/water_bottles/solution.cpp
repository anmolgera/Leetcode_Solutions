class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
    int c = numBottles + (numBottles-1)/(numExchange-1);
        
     return c;  
        
        
    }
};