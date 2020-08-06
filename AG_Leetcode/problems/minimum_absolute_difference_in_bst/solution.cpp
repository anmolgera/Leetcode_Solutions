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
int min_dif = INT_MAX, val = 0;
bool visited = false;
public:
int getMinimumDifference(TreeNode* root) {
if (root->left != NULL)
getMinimumDifference(root->left);

//val is assigned at least once
if(visited)
{
min_dif = min(min_dif, root->val - val);
}

val = root->val; 
visited = true;

if (root->right != NULL) 
    getMinimumDifference(root->right);
    
return min_dif;
}
};