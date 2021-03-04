/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    int len (ListNode *head){
        int cnt =0;
        while(head){
            head = head->next;
            cnt++;
        }
        return cnt;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    int x = len(headA);
    int y = len(headB);
        
        
    if(x>y){
        int d = x-y;
        for(int i =0; i<d; i++){
            headA = headA->next;
        }
    }
        
    else {
        int d = y-x;
        for(int i =0; i<d; i++){
            headB = headB->next;
        }
        
    }
        
    while(headA!=headB){
        headA = headA->next;
        headB = headB->next;
    }
    return headA;
    }
};