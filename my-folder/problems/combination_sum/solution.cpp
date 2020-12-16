class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        sort(candidates.begin(),candidates.end());
        vector<int> a;
        backtrack(v,candidates,target,0,0,a);
        return v;
    }
    
    
    void backtrack (vector<vector<int>>&v, vector<int>& candidates, int target, int start, int sum, vector<int> &a){
        
        if(start>candidates.size()-1){
            return ;
        }
        
        if(sum>target){
            return;
        }
        
        else if(sum==target){
                vector<int> b =a;
                v.push_back(b);
        }
        
        for(int i =start; i<candidates.size(); i++){
            
           
                a.push_back(candidates[i]);
                backtrack(v,candidates,target,i,sum+candidates[i],a);
                a.pop_back();
            
        }
        
      return;  
        
    }
};