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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int n =0;
        ListNode* temp = root;
        while(temp!=NULL){
            n++;
            temp = temp->next;
        }
        
        int len = n/k;
        int rem = n%k;
        vector<ListNode*> v;
        ListNode*prev = NULL;
        while(root){
            v.push_back(root);
            if(rem){
             int i =0;
             while(i<len+1){
                 i++;
                 prev = root;
                 root = root->next;
             }
                
            rem--;
            }
            
            else {
                  int i =0;
             while(i<len){
                 i++;
                 prev = root;
                 root = root->next;
             }
            }
            
            
            
       prev->next = NULL;     
            
    }
        for(int i = v.size(); i<k; i++){
            v.push_back(NULL);
        }
        
        return v;
    }
};