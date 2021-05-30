class Solution {
public:
    int minCost(string s, vector<int>& cost) {
     
    int res =0;
    int totalcost =0;
    int mxcost=0;

   // baaabccc
    for(int i =0; i<s.length(); i++){
        
        if(i>0 && s[i]!=s[i-1]){
            res += (totalcost-mxcost);
            totalcost =0;
            mxcost =0;
        }
        
       // else {
            
             totalcost +=cost[i];
             mxcost = max(mxcost,cost[i]);
            
        //}
    }
    res+=(totalcost-mxcost);
    return res;
        
    }
};