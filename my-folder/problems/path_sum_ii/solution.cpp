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
    void dfs( vector<vector<int>> &v, vector<int> &push, int sum, TreeNode*root){
   
        if(root == NULL){
            return;
        }
        
       push.push_back(root->val);
       if(root->left == root->right && sum == root->val){
           v.push_back(push);
       }
        
        dfs(v,push,sum-root->val,root->left);
        dfs(v,push,sum-root->val,root->right);
        push.pop_back();
        return;
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> v;
        vector<int> push;
        dfs(v,push,sum,root);
        return v;
    }
};