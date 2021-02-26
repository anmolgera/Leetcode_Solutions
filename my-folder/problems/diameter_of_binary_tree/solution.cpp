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
    
    int ans =0;
    
    
    int maxdep(TreeNode* root){
        
        if(root==NULL){
            return 0;
        }
        
        
        int l = maxdep(root->left);
        int r = maxdep(root->right);
        
        ans = max(ans,l+r+1);
        
        return 1+max(l,r);
        
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        
        maxdep(root);
        if(ans==0){
            return 0;
        }
        return ans-1;
        
        
    }
};