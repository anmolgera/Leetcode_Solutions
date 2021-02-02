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
    
    #define Not_needed 0
    #define No_camera 1
    #define has_camera 2
    int ans =0;
    
    
    int dfs(TreeNode* root){
        
        if(root == NULL) return Not_needed;
        int left = dfs(root->left);
        int right = dfs(root->right);
        
        if(left == No_camera || right == No_camera){
            ans++;
            return has_camera;
        }
        
        
        else if(left == has_camera || right == has_camera){
            return Not_needed;
        }
        
        else {
            return No_camera;
        }
        
        
        
        
        
    }
    
    
    int minCameraCover(TreeNode* root) {
        
        if(dfs(root)==No_camera) ans++;
        return ans;
        
        
        
        
        
        
        
        
    }
};