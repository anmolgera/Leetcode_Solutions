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
    ListNode *detectCycle(ListNode *head) {
        
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        bool  iscycle = false;
        while(slow && fast && fast->next){
            
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                iscycle = true;
                break;
            }
            
            
            
        }
        if(!iscycle){
            return NULL;
        }
        
        if(iscycle){
            
            slow = head;
            while(slow!=fast){
                slow = slow->next;
                fast = fast->next;
                if(slow ==fast){
                    return slow;
                }
                
            }
            
            
            
            return slow;
            
            
            
            
        }
        return NULL;
    }
};