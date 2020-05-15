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
    int getDecimalValue(ListNode* head) {
        int count =0;
        ListNode* temp = head;
        while(temp){  
            
            count = count*2 + temp->val;
            temp = temp->next;
        }
        
        
        
        
       /* int sum =0;
        while(head->next !=NULL){
            
            sum+=pow(2,count-1)*(head->val);
            count--;
            
        }
        
       
        */
        
         return count;
    }
};