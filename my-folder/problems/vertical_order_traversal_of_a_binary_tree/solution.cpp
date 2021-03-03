/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    
    void dfs(TreeNode*root,  map<int, vector<pair<int,int>>> &mp, int dfromRoot, int level){
        
        if(root==NULL){
            
            return;
        }
        
        mp[dfromRoot].push_back({level,root->val});
        
        dfs(root->left,mp, dfromRoot-1,level+1);
        dfs(root->right,mp,dfromRoot+1,level+1);
        
        
        
    }
         
    
   static bool compare(pair<int,int>&a , pair<int,int> &b){
        
        if(a.first!=b.first){
            return a.first<b.first;
        }
        
        return a.second<b.second;
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        
        map<int, vector<pair<int,int>>> mp;
        
        
        dfs(root, mp, 0 ,0);
        vector<vector<int>>res;
        for(auto i : mp){
            auto j = i.second;
            sort(j.begin(),j.end(),compare);
            vector<int> ans;
            for(int k =0; k<j.size(); k++){
             ans.push_back(j[k].second);    
            }
            res.push_back(ans);
           
        }
        
       
        
        return res;
    }
};