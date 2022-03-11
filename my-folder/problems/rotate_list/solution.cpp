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
    ListNode* rotateRight(ListNode* head, int k) {
    if(head==NULL){
          return NULL;
      }   
      int n =1;
      ListNode* temp = head;
     
      while(temp->next){
          n++;
          temp = temp->next;
      }
        
      k = k%n;
      if(k==0){
          return head;
      }
        
       temp->next = head;
       int t = n-k;
       while(t--){
           temp = temp->next;
       }
        
        ListNode* newnode = temp->next;
        temp->next = NULL;
        return newnode;        
    }
};