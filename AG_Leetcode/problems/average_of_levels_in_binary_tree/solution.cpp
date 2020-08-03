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
    vector<double> averageOfLevels(TreeNode* root) {
        
        
        if(root==NULL){
            return {};
        }
        
        
        vector<double> res;
        
        queue<TreeNode*> q;
        q.push(root);
        
        
        while(!q.empty()){
            
            vector<double> r;
            
            int s= q.size();
            
            while(s--){
                
                TreeNode*temp = q.front();
                q.pop();
                
                
                r.push_back(temp->val);
                
                if(temp->left){
                    
                    q.push(temp->left);
                }
                
                
                if(temp->right){
                    
                    q.push(temp->right);
                }
                
            }
            double sum =0;
            for(int i =0; i<r.size(); i++){
                sum+=r[i];
                
            }
            
            sum/=r.size();
            res.push_back(sum);
            
            
            
        }
        
        
        return res;
        
        
        
    }
};