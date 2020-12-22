class Solution {
public:
    
    void dfs( vector<vector<int>> &v, vector<int> &comb, int s,vector<int>&nums){
        
        if(comb.size()>=2){
            vector<int> a = comb;
            v.push_back(a);
            //return;
        }
        
        
        for(int i = s; i<nums.size(); i++){
            
            if(comb.size()==0 || nums[i]>=comb[comb.size()-1]){
                comb.push_back(nums[i]);
                dfs(v,comb,i+1,nums);
                comb.pop_back();
            }
            
            
        }
        return;
        
        
        
        
        
        
        
    }
    
    
    
    
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> comb;
        dfs(v,comb,0,nums);
        //return v;
        set<vector<int>> st;
        
        for(int i =0; i<v.size(); i++){
            st.insert(v[i]);
        }
        
        vector<vector<int>> m;
        for(auto i : st){
            m.push_back(i);
        }
        return m;
       /* sort(v.begin(),v.end());
        vector<vector<int>> x;
        if(v.size()<=1){
            return v;
        }
        
        for(int i =1; i<v.size(); i++){
            
            if(v[i]!=v[i-1]){
                x.push_back(v[i-1]);
            }
            else continue;
            
        }
        if(v.size()>=2){
            if(v[v.size()-1]!=v[v.size()-2]){
                x.push_back(v[v.size()-2]);
            }
        }
        return x;
        */
    }
};