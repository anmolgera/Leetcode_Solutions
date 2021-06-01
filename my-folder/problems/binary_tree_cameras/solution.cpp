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
    
    
    
    int func(TreeNode*root){
    
    if(root == NULL) return 1;
    int l = func(root->left);
    int r = func(root->right);
    if(l== 0 || r == 0){
        
        ans++;
        return 2;
    }
        
    else if(l == 2 || r ==  2){
        return 1;
    }
        
    else return 0;
        
        
        
    }
    
    
    int minCameraCover(TreeNode* root) {
        if(root == NULL) return 0;
        if(root ->left == NULL && root->right ==NULL) return 1;
        if(func(root)==0) ans++;
        return ans;
    }
};