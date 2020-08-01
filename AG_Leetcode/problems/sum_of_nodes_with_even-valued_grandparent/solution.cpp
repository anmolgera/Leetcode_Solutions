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
    
    int sum;
    
    void dfs(TreeNode*root, vector<int> v){
        
        
        if(root==NULL){
            return;
        }
        
        if(v[0]%2==0){
            
            sum+=root->val;
        }
        
        v[0] = v[1];
        v[1] = root->val;
        
        
        dfs(root->right,v);
        dfs(root->left,v);
        
        
        
    }
    
    
    int sumEvenGrandparent(TreeNode* root) {
        
        sum =0;
        vector<int>v(2,1);
        
        dfs(root,v);
        return sum;
    }
};