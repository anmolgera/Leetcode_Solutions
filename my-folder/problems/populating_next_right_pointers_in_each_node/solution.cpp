

class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL){
            return root;
        }
        Node*head = root;
        while(root->left){
             
            Node* x = root;
            while(x){
                x->left->next = x->right;
                if(x->next){
                    x->right->next = x->next->left;
                }
                
                x = x->next;
             }
            root = root->left;
        }
        return head;
    }
      
};