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
    ListNode* middleNode(ListNode* head) {
        
        
        ListNode * temp = head;
        int len =0;
        
        while(temp!=NULL){
            len++;
            temp = temp->next;
            
        }
       
        int mid =0;
        if(len%2){
            mid = (len+1)/2;
        }
        
        else mid = len/2+1;
    
    
 temp=head;
    while(mid>1){
        
        temp= temp->next;
        mid--;
            
        
        
        
    }
    
    return temp;
}
};