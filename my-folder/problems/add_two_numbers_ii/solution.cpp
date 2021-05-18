/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* reverse( ListNode* head){
        
        ListNode *prev = NULL;
        ListNode *n = NULL;
        ListNode* curr = head;
        while(curr){
            n = curr->next;
            curr->next = prev;
            prev = curr;
            curr =n;
            
        }
        
        return prev;
        
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
    ListNode * x = reverse(l1);
    ListNode * y = reverse(l2);
        
    int c =0;
        
    ListNode* head =NULL,*tail = NULL;
   
        
        
    while(x || y){
    int d1 = x? x->val: 0;
    int d2 = y? y->val: 0;
    int s = d1+d2+c;
    c= s/10;
    int d = s%10;
    ListNode* curr = new ListNode(d);
    if(head==NULL) head = curr;
    if(tail==NULL) tail = curr;
    else {
        
          tail ->next = curr;
          tail = tail->next;
         }
    
    if(x) x = x->next; 
    if(y) y = y->next;
        
    }
    
    if(c>0){
        ListNode*n = new ListNode(c);
        tail->next = n;
    }    
    ListNode* l3 = reverse(head);
    return l3;
        
        
        
    }
};