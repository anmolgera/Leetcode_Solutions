class Solution {
public:
    
    void dfs(vector<vector<int>> &v, vector<int> & nums, vector<int>  sub, int idx){
        
        
        v.push_back(sub);
        for(int i =idx; i<nums.size(); i++){
            
            sub.push_back(nums[i]);
            //cout<<sub[sub.size()-1]<<endl;
            dfs(v,nums,sub,i+1);
            sub.pop_back();
            
            
            
            
            
            
        }
        
        return;
        
        
    }
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> v;
        vector<int> sub;
         
        dfs(v,nums,sub,0);
        for(int i =0; i<v.size(); i++){
            
            for(int j =0; j<v[i].size(); j++){
                cout<<v[i][j];
            }
            cout<<endl;
        }
        return v;
        
        
        
        
        
    }
};