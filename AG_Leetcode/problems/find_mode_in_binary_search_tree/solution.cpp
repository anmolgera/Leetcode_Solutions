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
    
    
    int curr =0;
    int maxfreq =0;
    int prenode =-1;
    
    vector<int> res;
    void find(TreeNode* root, vector<int> &res){
        
        if(root == NULL){
            return;
        }
        find(root->left,res);
        if(prenode == root->val) curr++;
        else curr =1;
        
        if(curr > maxfreq){
            
            maxfreq = curr;
            res.clear();
            res.push_back(root->val);
            
        }
        
        
        if(curr==maxfreq ){
            
            if(res.size()==0)
            res.push_back(root->val);
            
            else if(res[0]!=root->val){
                
                res.push_back(root->val);
            }
            
        }
        
        prenode = root->val;
        find(root->right,res);
        
        
    }    
        
        
        
    
    
    
    
    
    vector<int> findMode(TreeNode* root) {
        
        if(root ==NULL){
            
            return {};
        }
        
  
       find(root, res);
        return res;
        
        
        
        
    }
    
    
    
    
    
};