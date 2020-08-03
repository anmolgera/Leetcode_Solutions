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
    vector<vector<int>> levelOrder(TreeNode* root) {
       
        vector<vector<int>> out;
        if(root==NULL){
            return {};
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        
        while(!q.empty()){
            
            int s = q.size();
            
            vector<int> res;
            
            while(s--){
                
                TreeNode * temp = q.front();
                q.pop();
                
                res.push_back(temp->val);
                if(temp->left){
                  q.push(temp->left);  
                    
                }
                
                
                if(temp->right){
                    
                    q.push(temp->right);
                    
                }
                
            }
            
            
            
            out.push_back(res);
            
            
        }
        
        
        
        
        
        
        
     return out;   
        
        
    }
};