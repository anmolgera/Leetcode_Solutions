/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
    if(head==NULL) return NULL;
    Node*p = head;
    while(p){
        if(p->child==NULL){
            p = p->next;
            continue;
        }
        
        else {
            Node* cur = p->child;
            while(cur->next){
                cur = cur->next;
            }
            cur->next  = p->next;
            
            if(p->next)  p->next->prev = cur;
            p->next = p->child;
            p->next->prev = p;
            p->child =NULL;
            
            
        }
        p = p->next;
        
    }
    return head;
    }
};