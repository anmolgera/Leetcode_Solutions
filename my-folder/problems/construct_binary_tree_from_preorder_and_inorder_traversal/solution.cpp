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
    
    TreeNode* func(int prei, int start, int end, vector<int>& preorder, vector<int>& inorder){
    if(start>end) return NULL;
    TreeNode* r = new TreeNode(preorder[prei]);
    int rooti =0;
    for(int i =start; i<=end; i++ ){
        
        if(inorder[i]==r->val){
            rooti = i;
            break;
        }
    }
    
    r->left =func(prei+1,start,rooti-1,preorder,inorder);
    r->right =func(prei + rooti - start +1 , rooti+1, end, preorder, inorder);
    return r;    
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    return func(0,0, inorder.size()-1, preorder,inorder);    
    }
};