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
    
    int sum (TreeNode* root, int data){
        
        
        if(root == NULL){
            
            return 0;
        }
        
        data = 10*data + root->val;
        if(!root->left && !root->right){
            
            return data;
        }
        
        return sum(root->left,data) + sum(root->right,data);
        
        
    }
    
    
    
    
    
    
    int sumNumbers(TreeNode* root) {
       return sum(root,0); 
    }
};