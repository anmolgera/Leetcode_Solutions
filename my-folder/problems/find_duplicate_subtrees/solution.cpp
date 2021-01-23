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
    
    string serial (TreeNode* root,  map<string , vector<TreeNode*>> &mp){
        
        if(root==NULL){
            return "";
        }
        
        string s = "(" + serial(root->left,mp) + to_string(root->val) + serial(root->right, mp) +  ")";
        mp[s].push_back(root);
        return s;
        
        
        
        
        
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
      map<string , vector<TreeNode*>> mp;
      serial(root,mp);
      vector<TreeNode*> res;
      for(auto i : mp){
          if(i.second.size()>1){
              res.push_back(i.second[0]);
          }
          //else res.push_back(i.second[]);
      }
    return res;
    }
};