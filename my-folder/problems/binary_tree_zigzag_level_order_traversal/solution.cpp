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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    if(root == NULL) return {};
        
    queue<TreeNode*> q;
        
    q.push(root);
        
    vector<vector<int>> ans;
    int lvl =0;    
    while(!q.empty()){
    int s = q.size();
    vector<int> v(s);
        
    for(int i =0; i<s; i++){
    auto j = q.front();
    q.pop();
    if(lvl==0){
        v[i] = j->val;
    }
    else {
        v[s-i-1] = j->val;
    }
    if(j->left) q.push(j->left);
    if(j->right) q.push(j->right);
    }
     
    lvl ^=1;
    ans.push_back(v);
    }
        
    return ans;
        
    }
};