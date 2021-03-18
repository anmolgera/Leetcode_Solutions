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
    ListNode* partition(ListNode* head, int x) {
    ListNode * one = new ListNode(0);
    ListNode * two = new ListNode(0);
    ListNode * f = one;
    ListNode * s = two;
    
    while(head){
        if(head->val<x){
            one->next = head;
            one = one->next;
        }
        
        else {
            two ->next = head;
            two = two->next;
        }
        
        head = head->next;
    }
    two->next = NULL;
    one->next = s->next;
    return f->next;
    }
};