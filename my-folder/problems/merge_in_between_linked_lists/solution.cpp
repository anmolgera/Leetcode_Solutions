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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
      
    ListNode * p1 = list1;
    ListNode * p2 = list1;
    ListNode * cur = list1;
     
    int cnt =0;
    while(cur){
    
    if(cnt < a-1){
       p1 = p1 ->next;  
    }
        
    if(cnt < b+1 ){
        p2 = p2->next;
    }
        
    cnt++;
    cur = cur->next;
    }
    
        
    p1 -> next = list2;
    while(list2->next){
        list2 = list2->next;
    }
    
    list2->next = p2;
    return list1;
        
    }
};