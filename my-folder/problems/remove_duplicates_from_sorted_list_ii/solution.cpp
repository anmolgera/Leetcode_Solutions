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
    ListNode* deleteDuplicates(ListNode* head) {
    if(head == NULL|| head->next == NULL) return head;
    ListNode* curr = head;
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* prev = dummy;
    
    while(curr){
    
    while(curr->next && (curr->val == curr->next->val)){
        
        curr = curr->next;
    }
    if(prev -> next == curr) prev = curr; // Unique Element
    else prev->next = curr->next; // Non Duplicte case
    curr = curr->next;
    }
    prev->next =NULL;
    return dummy->next;    
    }
};