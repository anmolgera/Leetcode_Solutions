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
    
    
  void  dfs(TreeNode* root, int &maxdepth, int height, int &valleft){
        
        if(root==NULL){
            return;
        }
      
        dfs(root->left,maxdepth,height+1,valleft);
        dfs(root->right,maxdepth,height+1,valleft);
      
        if(height>maxdepth){
           maxdepth = height;
           valleft = root->val;
        }
        
        
        
        
        
    }
    
    
    int findBottomLeftValue(TreeNode* root) {
      
        queue<TreeNode*> q;
        q.push(root);
        int cur =0;
        while(!q.empty()){
            
            TreeNode* temp = q.front();
            q.pop();
            cur = temp->val;
            if(temp->right){
                q.push(temp->right);
            }
            
            if(temp->left){
                q.push(temp->left);
            }
            
        }
        return cur;
        
    }
};