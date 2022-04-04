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
    ListNode* swapNodes(ListNode* head, int k) {
    
    auto temp = head;    
    int cnt = 0;
    
    while(temp){
        
        temp = temp -> next;
        cnt = cnt + 1;
    }
        
    int start = k;
    int end = cnt - k + 1;
    
    cnt = 0;
    temp = new ListNode(0);
    temp -> next = head;
    int valstart = -1;
    int valend = -1;
    
    while(temp){
        
        temp = temp -> next;
        cnt++;
        if (cnt == start) valstart = temp -> val;
        if (cnt == end) valend = temp -> val;   
    }
        
    
    temp = new ListNode(0);
    temp -> next = head;    
    cnt = 0;
    
    while(temp){
        
        cnt += 1;
        temp = temp -> next;
        if(cnt == start) temp -> val = valend;
        if(cnt == end) temp -> val = valstart;
    }
    
    return head;    
    
    }
    
};