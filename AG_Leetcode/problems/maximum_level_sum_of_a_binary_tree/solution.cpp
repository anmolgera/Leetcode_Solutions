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
    int maxLevelSum(TreeNode* root) {
        
        queue<TreeNode*>q;
        
        q.push(root);
        
        int level =0;
        int max_level =0;
        int max_sum =0;
        
        while(!q.empty()){
            
            int size = q.size();
            int sum =0;
            
            while(size--){
                
                TreeNode * temp = q.front();
                q.pop();
                
                sum +=temp->val;
                
                
                if(temp->left){
                    
                    q.push(temp->left);
                    
                }
                
                
                  if(temp->right){
                    
                    q.push(temp->right);
                    
                }
                
                
                
                
                
            }
            
            level++;
            
            if(sum>max_sum){
                
                
                max_sum = sum;
                max_level = level;
            }
            
            
            
            
            
            
        }
        
        
       return max_level; 
        
        
    }
};