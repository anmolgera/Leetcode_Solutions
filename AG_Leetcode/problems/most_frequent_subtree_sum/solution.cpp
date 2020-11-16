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
    
    int mxcount =0;
    map<int,int> mp;
    
    int dfs(TreeNode* root){
        
        if(root==NULL){
            return 0;
        }
        
        int s = root->val + dfs(root->left) + dfs(root->right);
        mxcount = max(mxcount,++mp[s]);
        return s;
        
    }
    
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        
        
        dfs(root);
        vector<int>res;
        for(auto i : mp){
            //cout<<i.second<<" ";
            if(i.second==mxcount){
                res.push_back(i.first);
            }
        }
        
        return res;
        
        
    }
};