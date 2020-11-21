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
    vector<int> largestValues(TreeNode* root) {
        
        if(root ==NULL){
            return {};
        }
        queue<TreeNode* > q;
        q.push(root);
        
        vector<int> v;
        
        while(!q.empty()){
            int mx = INT_MIN;
            int siz = q.size();
            while(siz--){
                
                TreeNode* temp = q.front();
                q.pop();
                
                if(temp->val > mx){
                    mx = temp->val;
                }
                
                if(temp->left){
                    q.push(temp->left);
                }
                
                if(temp->right){
                    q.push(temp->right);
                }
                
                
                
                
                
            }
           // mx = INT_MIN;
            
            v.push_back(mx);
            
            
            
            
        }
     return v;   
        
    }
};