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
    
    ListNode* getMiddle(ListNode*head){
        
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            
            slow = slow->next;
            fast = fast->next->next;
            
            
        }
        return slow;
        
    }
    
    
    ListNode* getReverse(ListNode*head){
        
    ListNode* prev = NULL;
    ListNode* curr = head;
    while(curr){
        auto nextnode = curr->next;
        curr->next = prev;
        prev = curr;
        curr =nextnode;
        
    }
        
    return prev;    
        
    }
    
    void reorderList(ListNode* head) {
    if(head == NULL || head->next == NULL)  return;
    auto mid = getMiddle(head);
    cout<<mid->val<<endl;
    auto l = head->next;
    auto r = getReverse(mid);
    /*while(l){
        cout<<l->val<<endl;
        l = l->next;
    }
    cout<<"Hi"<<endl;
    while(r){
        cout<<r->val<<endl;
        r = r->next;
    }*/
    cout<<r->val<<endl;
    
    for(int i =0; ( l&& r && (l!=r)) ; i++, head = head->next){
        
    if((i&1)){
    head->next = l;
    l = l->next;
        
    }   
        
    else {
    
    head->next = r;
    r = r->next;
        
    }
        
    }
    //return;
    }
};