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
    
    
    ListNode* mergetwo(ListNode* one, ListNode* two){
        
       if(one  == NULL){
           
           return two;
       } 
        
    if(two==NULL){
        
        return one;
    }
        
        if(one->val<two->val){
            
            one->next = mergetwo(one->next,two);
            return one;
        }
        
        else{
            
            two->next = mergetwo(one,two->next);
            return two;
        }
        
        
    }
    
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        
        if(lists.size()==0){
            return 0;
        }
      int len = lists.size();
        
     while(len>1){
      for(int i =0; i<len/2; i++){
          
          lists[i] = mergetwo(lists[i],lists[len-i-1]);
      }
      len = (len+1)/2;  
     }
       return lists.front(); 
    
        
    }
};