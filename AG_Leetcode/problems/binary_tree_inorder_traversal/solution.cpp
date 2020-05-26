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
    
    
    
     void inorder (TreeNode* root, vector <int > &vi){
        
         
         if(root == NULL){
             return ;
         }
        inorder(root->left, vi);
        vi.push_back(root->val);
        inorder(root->right,vi);
        
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        
        
        vector <int > vi;
        
        inorder ( root , vi);
        return vi;
        
        
    }
    
    
};