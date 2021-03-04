class Solution {
public:
    int countOdds(int low, int high) {
    if(low%2==high%2 && high%2==1){
        return (high-low)/2+1;
    } 
    else if(low%2==high%2 && high%2==0){
        return (high-low)/2;
    }
        
    else return (high-low)/2+1;
    }
};