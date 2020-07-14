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
        
        
        
      if(root == NULL){
          
          return 0;
      }
            
    queue<TreeNode * > q;
        q.push(root);
        
        
        int level =0;
        int max_level =0;
        int global_sum =0;
        
        while(!q.empty()){
            
            
            
            int sum =0;
            
            int size = q.size();
            
            
            while(size--){
            
            
            TreeNode* temp = q.front();
            //q.push(temp);
            q.pop();
            
            sum +=temp->val;
                
                if(temp->left!=NULL){
                    
                    q.push(temp->left);
                }
                
                if(temp->right!=NULL){
                    
                     q.push(temp->right);
                }
            
                }
            
            level ++;
            
            if(sum > global_sum){
                
                max_level = level;
                global_sum = sum;
            }
            
        }
            
            
            
            
            
     return max_level;       
            
            
        }
        
        
        
        
        
        
        

};