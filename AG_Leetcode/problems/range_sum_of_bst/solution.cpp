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
    
    void dfs(TreeNode* root, int L, int R, vector<int> &vi){
        
        if(root == NULL){
            return;
        }
        
        if((root->val>=L) && (root->val <=R)){
            vi.push_back(root->val);
        }
        
        dfs(root->left,L,R,vi);
        dfs(root->right,L,R,vi);
        
        
        
    }
    
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        vector<int > vi;
        
        dfs(root, L, R, vi);
        
        int sum = accumulate(vi.begin(),vi.end(),0);
        return sum;
        
    }
};