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
    
    int res =0;
    int dfs(TreeNode* root){
        
        if(root==NULL){
            
            return 0;
        }
        
        
        int left = dfs(root->left), right = dfs(root->right);
        res+=abs(left) + abs(right);
        
        return root->val + right + left - 1;
        
        
        
        
        
    }
    
    
    
    int distributeCoins(TreeNode* root) {
        
         dfs(root);
        return res;
        
    }
};