class Solution {
public:
    
   void backtrack(vector<vector<int>> &res,vector<int> &comb, vector<int> & candidates, int start, int sum, int tar ){
        
      /*  if(start>candidates.size()-1){
            return;
        }*/
        
        if(sum>tar){
            return;

        }
       
       if(sum==tar){
           vector<int> a = comb;
           res.push_back(a);
           return;
       }
       
       for(int i = start; i<candidates.size(); i++){
           
           if(i>start && candidates[i]==candidates[i-1]) continue;
           comb.push_back(candidates[i]);
           backtrack(res,comb,candidates,i+1,sum+candidates[i],tar);
           comb.pop_back();
           
           
       }
     // return;
       
        
        
    }
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> res;
        sort(candidates.begin(),candidates.end());
        vector<int> comb;
        backtrack(res,comb,candidates,0,0,target);
        return res;
        
    }
};