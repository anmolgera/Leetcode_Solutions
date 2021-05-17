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
    
    ListNode*merge(ListNode* l1, ListNode* l2){
        ListNode* dummy = new ListNode(0);
        ListNode*temp = dummy;
        while(l1&& l2){
            if(l1->val<=l2->val){
            dummy->next =l1;
            l1 = l1->next;
            dummy = dummy->next;
            }
            
            else {
            dummy->next =l2;
            l2 = l2->next;
            dummy = dummy->next;
            }
        }
       while(l1){
           dummy->next = l1;
           l1 = l1->next;
           dummy = dummy->next;
           
       } 
        
     while(l2){
          dummy->next = l2;
           l2 = l2->next;
           dummy = dummy->next;
     }
        
    return temp->next;
    }
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
    int n = lists.size();
    if(n==0) return 0;
        
    while(n>1){
        for(int i =0; i<n/2; i++){
            lists[i] = merge(lists[i],lists[n-i-1]);
        }
        n = (n+1)/2;
    }
    return lists[0];
    }
};