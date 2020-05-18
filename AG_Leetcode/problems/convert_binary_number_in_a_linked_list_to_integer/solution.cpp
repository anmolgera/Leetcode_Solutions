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
        ListNode*tem = head;
        
        while(tem!=NULL){
            
            count = 2*count + tem->val;
            tem = tem ->next;
        }
        
        return count;
        
    }
};