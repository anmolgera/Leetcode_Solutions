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
    int mx =INT_MIN;
    
     int maxPathSum1(TreeNode* root) {
    if(root==NULL){
        return 0;
    }    
        
    int l = maxPathSum1(root->left);
    int r = maxPathSum1(root->right);
    mx = max(l+r+root->val,mx);
    mx = max(mx,root->val);
    mx = max(mx,root->val+l);
    mx = max(mx,root->val+r);
    return max(max(l,r)+root->val,root->val);
    }
    
    int maxPathSum(TreeNode* root) {
    if(root==NULL){
        return 0;
    }    
        
     maxPathSum1(root);
        return mx;
    }
};