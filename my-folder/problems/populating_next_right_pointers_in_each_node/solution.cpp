/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
    Node* par = root;
    Node* cur = NULL;
    if(!root) return root;
    while(par->left){
        cur = par;
        while(cur){
         cur->left->next = cur->right;
         if(cur->next) cur->right->next = cur->next->left;
         cur = cur->next;     
        }
        par  = par->left;
    }
    return root;
    }
};