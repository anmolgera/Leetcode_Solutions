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
    ListNode* swapPairs(ListNode* head) {
        
       if(head==NULL){
           return NULL;
       }
        
       ListNode* temp = new ListNode(0);
       temp->next= head;
       ListNode* pre = temp;
       ListNode* cur = head;
       while(cur && cur->next)
       {
           pre->next = cur->next;
           pre= pre->next;
           cur->next =pre->next;
           pre->next = cur;
           pre = cur;
           cur=cur->next;
           
           
           
           
           
           
       }
        
        return temp->next;
    }
};

