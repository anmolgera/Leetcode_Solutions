class Solution {
public:
    vector<int> closestDivisors(int num) {
     for(int i = sqrt(num+2); i>0; i--){
         
         if((num+1)%i==0){
             return {i,(num+1)/i};
         }
         if((num+2)%i==0){
             return {i,(num+2)/i};
         }
     }
        return {};
    }
};