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
    
    
    int count ( ListNode*head)
    {   int x =0;
        while(head!=NULL){
            head = head->next;
            x++;
        }
        
     return x;
    }    
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        
        
        
        int x =count(headA);
        int y =count(headB);
        
        
        
        if(x>y){
            
           int d = x-y;
            for(int i =0; i<d; i++){
                
                headA = headA->next;
            }
            
            
            
            
        }
        
       else {
           
           
           int d = y-x;
           for(int i =0; i<d; i++ ){
               
               
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