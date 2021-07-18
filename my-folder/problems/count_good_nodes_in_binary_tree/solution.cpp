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
    int goodNodes(TreeNode* root , int mx = -10000) {
    if(root == NULL) return 0;
    int ans =0;
    if(root->val>=mx){
        ans+=1;
    }
    return goodNodes(root->left, max(mx,root->val)) + goodNodes(root->right, max(mx,root->val)) + ans;
    }
};