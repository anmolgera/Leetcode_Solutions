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
    vector<double> averageOfLevels(TreeNode* root) {
    vector<double> v;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int s = q.size();
        int n = s;
        double sum =0;
        while(s--){
            
            auto i = q.front();
            sum+=i->val;
            q.pop();
            if(i->left){
                q.push(i->left);
            }
            
            if(i->right){
                q.push(i->right);
            }
        }
        
        v.push_back(sum/n);
        
    }
        return v;
    }
};