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
    
    
    long long max(TreeNode*root){
        
        if(!root){
            return 0;
        }
        
        
        return root->val + max(root->left) + max(root->right);
        
        
        
    }
    
    long long  func(TreeNode*root, long long  &sum, long long &ans){
        
        if(root==NULL){
            
            return 0;
        }
        
        int l = func(root->left,sum,ans);
        sum=sum-l;
        
        if(l*sum>ans){
            
            ans = l*sum;
        }
        
        sum=sum+l;
        
        
        int r = func(root->right,sum,ans);
        sum = sum-r;
        
        if(sum*r>ans){
            
            ans = sum*r;
            
        }
        sum=sum+r;
        
        return root->val+l+r;
        
        
    }
    
    
    
    int maxProduct(TreeNode* root) {
        
        long long  sum = max(root);
        long long ans =0;
        
        func(root,sum,ans);
        return ans%1000000007;
        
        
        
        
        
    }
};