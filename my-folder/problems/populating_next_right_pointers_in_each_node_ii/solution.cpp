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
        if(root==NULL){
            return root;
        }
        
       Node* head = root;
        while(head!=NULL){
            
            Node* temphead = new Node(0);
            Node* temptail = temphead;
            
                for( Node* node = head ;node!=NULL; node = node->next){
                    if(node->left){
                        temptail->next = node->left;
                        temptail =  node->left;
                    }
                    
                    if(node->right){
                        temptail->next = node->right;
                        temptail = temptail->next;
                
                        
                    }
                    
                    
                    
                }
            
            
            head = temphead->next;
            
        }
        
        return root;
        
        
    }
};