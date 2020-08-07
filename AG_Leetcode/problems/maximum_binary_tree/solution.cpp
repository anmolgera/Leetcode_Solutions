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
    
    
    int max ( vector<int>&nums, int l ,int r){
        
        int j = l;
        
        for(int i =l; i<r; i++){
            
            if(nums[j]<nums[i]){
                
                j = i;
            }    
            
        }
        
        return j;
        
        
        
    }
    
     TreeNode* construct(vector<int> &nums, int l, int r){
         
         if(l==r){
             
             return NULL;
         }
         
         int maxi = max(nums,l,r);
         TreeNode*root = new TreeNode(nums[maxi]);
         
         root->left = construct(nums,l,maxi);
         root->right = construct(nums,maxi+1,r);
         
         
         return root;
         
         
     }
    
    
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       
        
        return construct(nums,0,nums.size());
        
        
        
    }
    
    
    
};