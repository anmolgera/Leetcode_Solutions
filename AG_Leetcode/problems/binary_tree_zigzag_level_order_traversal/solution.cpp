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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       
        
        if(!root){
            
            return {};
        }
        vector<vector<int>> out;
        
        queue<TreeNode*> q;
        q.push(root);
        int lvl =0;
        
        while(!q.empty()){
            
            int s = q.size();
            vector<int> v(s);
            
            
            
            
            for(int i =0; i<s; i++){
                
                TreeNode*res = q.front();
                q.pop();
                
                if(lvl ==0){
                    v[i] = res->val;
                    
                    
                }
                
                else {
                    
                    v[s-1-i] = res->val;
                    
                    
                    
                }
                
            if(res->left) {
                
                q.push(res->left);
            }
                
          if(res->right){
              
              q.push(res->right);
          }
                
                
                
            }
            
        out.push_back(v);
           lvl = !lvl; 
            
            
        }
        
        return out;
    }
};