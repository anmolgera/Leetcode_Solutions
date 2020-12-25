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
    
    pair<int,TreeNode*> deep(TreeNode* root){
        if(root==NULL){
            return {0,NULL};
        }
        
        pair<int,TreeNode*> left = deep(root->left);
        pair<int,TreeNode*> right = deep(root->right);
        int d1 = left.first;
        int d2 = right.first;
        return {max(d1,d2)+1,d1==d2? root : d1>d2 ? left.second : right.second};
        
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return deep(root).second;
    }
};