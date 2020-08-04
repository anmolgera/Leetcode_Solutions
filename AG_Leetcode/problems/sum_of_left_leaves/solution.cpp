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
    
    void dfs(TreeNode* root, int& sum){
        
        if(root==NULL){
            
            return ;
        }
        
        
        if(root->left == root->right){
            
            
            sum+=root->val;
        }
        
      dfs(root->left,sum);
      dfs(root->right,sum);        
        
        
        
    }
    
    int sumOfLeftLeaves(TreeNode* root, bool isleft = false) {
        
        
        if(!root){
            
            return 0;
        }
        
        if(root->left == root->right && isleft == true){
            
            return root->val;
        }
        
        return  sumOfLeftLeaves(root->left, true) +  sumOfLeftLeaves(root->right, false);
        
    }
};