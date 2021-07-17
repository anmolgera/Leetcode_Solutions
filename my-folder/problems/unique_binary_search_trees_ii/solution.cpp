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
    
    vector<TreeNode*> generateTrees(int n){
        return generate(1,n);
    }
    vector<TreeNode*> generate(int start , int end) {
    
    vector<TreeNode*> res;
        
    if(start>end){
    res.push_back(NULL);
    return res;
    }
        
    for(int i =start;  i<=end; i++){
        
    vector<TreeNode*> li = generate(start,i-1);
    vector<TreeNode*> ri = generate(i+1,end);
     
    for(int l =0; l<li.size(); l++){
        for(int r =0; r<ri.size(); r++){
            TreeNode* root =  new TreeNode(i);
            root->left  = li[l];
            root->right = ri[r];
            res.push_back(root);
        }
    }
        
        
        
    }    
        
    return res;    
        
        
    }
};