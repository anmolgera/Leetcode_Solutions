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
    
    
    bool issame(TreeNode* s, TreeNode* t){
        
        
        if(!s && !t) return true;
        if(!s || !t) return false;
        
        if(s->val !=t->val){
            
            return false;
        }
        
        return issame(s->left,t->left) && issame(s->right,t->right);
        
        
        
        
    }
    
    
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        
        if(!s){
            
            return false;
        }
        
        if(issame(s,t)) return true;
        
        return isSubtree(s->left,t) || isSubtree(s->right,t);
        
    }
};