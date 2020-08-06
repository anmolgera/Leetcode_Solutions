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
    
    
    void dfs(TreeNode*root,int&val, int &min1){
        
        if(root->left){
            
            dfs(root->left,val,min1);
        }
        
        if(val>=0){
            
            min1 = min(min1,root->val-val);
            
        }
        
        val = root->val;
        
        if(root->right){
            
            dfs(root->right,val,min1);
        }
        
        
        
        
    }
    
    
    int minDiffInBST(TreeNode* root) {
        int val =-1;
        int min1= INT_MAX;
        
        dfs(root,val,min1);
        return min1;
    }
};