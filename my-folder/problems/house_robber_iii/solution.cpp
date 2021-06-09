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
    unordered_map<TreeNode*, int> mp;
    int rob(TreeNode* root) {
    if(root==NULL) return 0;
    int val =0;
    if(mp.find(root)!=mp.end()) return mp[root];
    if(root->left){
        val +=rob(root->left->left) + rob(root->left->right);
    }
    if(root->right){
        val += rob(root->right->left) +  rob(root->right->right);
    }
        
    return mp[root] = max(val + root->val , rob(root->left)+ rob(root->right));
    }
};