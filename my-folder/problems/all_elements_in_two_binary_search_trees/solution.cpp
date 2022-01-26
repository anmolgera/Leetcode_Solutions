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
  void inorder(TreeNode*root,vector<int>&res){
        
        if(root==NULL) return;
        
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res);
        
   }
   
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
       
        if(root1 == NULL && root2 ==NULL){
            return {};
        }
        
        vector<int>res1;
        vector<int>res2;
        
        if(root1)inorder(root1,res1);
        if(root2)inorder(root2,res2);
        
        if(root1==NULL){
            return res2;
        }
        
        if(root2==NULL){
            return res1;
        }
        
        vector<int> res;
        
        int i =0, j=0;
        
        int m = res1.size();
        int n = res2.size();
        
        while(i<m && j<n){
            
            if(res1[i]<=res2[j]){
                res.push_back(res1[i]);
                i++;
            }    
            else{
                res.push_back(res2[j]);
                j++;
            }
        }
        
        while(i<m){
            
            res.push_back(res1[i]);
            i++;
        }
        
        while(j<n){
            res.push_back(res2[j]);
            j++;
            
        }
        return res;
   
    }
};