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
    TreeNode* deleteNode(TreeNode* root, int key) {
    if(root==NULL) return root;
    if(root->val==key){
        if(root->right==NULL){
            TreeNode* l = root->left;
            delete root;
            return l;
        }
        
        else {
            TreeNode * l = root->right;
            while(l->left){
                l = l->left;
            }
            swap(root->val,l->val);
            //delete l;
            //return 
            root->right= deleteNode(root->right,key);
            
        }
    }  
       if(root->val > key ) root->left  = deleteNode(root->left,key);
       if(root->val < key ) root->right = deleteNode(root->right,key);
       return root;
    
    }
};