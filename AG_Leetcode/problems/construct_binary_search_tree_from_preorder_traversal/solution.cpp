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
    
    
    void built(TreeNode*root, int a){
        
        if(root->val>a){
            
            if(!root->left){
                
                
            root->left = new TreeNode(a); 
            }            
            
            else built(root->left,a);
            
            
            
            
        }
        
        
        if(root->val <a){
            
            if(!root->right){
                
                
                root->right = new TreeNode(a);
            }
            
            
            else built(root->right,a);
            
            
            
        }
        
        
        
        
        
    }
    
    
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        
        if(preorder.size()==0){
            
            return 0;
        }
        
        
        TreeNode* root= new TreeNode(preorder[0]);
        
        for(int i =1; i<preorder.size(); i++){
            
            built(root,preorder[i]);
        }
        
      return root;  
    }
};