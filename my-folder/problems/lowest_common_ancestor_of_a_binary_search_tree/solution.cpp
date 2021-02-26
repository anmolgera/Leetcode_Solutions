/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     
       int parent = root->val;
       int c1 = p->val;
       int c2 = q->val;
        
       if(c1>parent && c2>parent){
           
            return lowestCommonAncestor( root->right, p,  q);
       }
        
        else if(c1<parent && c2<parent){
            
           return  lowestCommonAncestor( root->left, p,  q);
        }
        
        else return root;
        
        
    }
};