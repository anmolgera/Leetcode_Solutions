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
    
    TreeNode* first = NULL;
    TreeNode* second = NULL;
    TreeNode* prev =NULL;
    
    void help(TreeNode*root){
        
        
    if(root == NULL) return;
    help(root->left);
    if(prev && first==NULL && prev->val>root->val) first = prev;
    if(prev && first!=NULL && prev->val>root->val) second = root;
    prev = root;
    help(root->right);
        
        
        
        
        
        
        
    }
    
    void recoverTree(TreeNode* root) {
        
        
    help(root);
    swap(first->val,second->val);
        
    }
};