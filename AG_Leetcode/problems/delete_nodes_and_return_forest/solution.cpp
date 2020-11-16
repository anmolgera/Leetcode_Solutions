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
    vector<TreeNode*> result;
    unordered_set<int> s;
    
    TreeNode* helper(TreeNode*root, bool parent){
        
        if(root==NULL){
            return NULL;
        }
        
        bool deleted = s.find(root->val)!=s.end();
        if(parent && !deleted){
            result.push_back(root);
        }
        
        root->left = helper(root->left,deleted);
        root->right =helper(root->right,deleted);
        return deleted? NULL : root;
        
        
        
    }
    
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        
        
        if(root==NULL){
            return {};
        }
        
        for(int i =0; i<to_delete.size(); i++){
            s.insert(to_delete[i]);
        }
        
       helper(root,true);
        return result;
        
        
        
        
    }
};