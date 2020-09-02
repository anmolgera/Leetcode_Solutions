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
  ListNode *reverseBefore(ListNode *head, ListNode *node) {
        ListNode *pre = node, *cur = head;
        while (cur != node) {
            ListNode *next = cur->next;
            cur->next = pre;
            pre = cur; cur = next;
        }
        return pre;
    }
    

    ListNode *reverseKGroup(ListNode *head, int k) {
        // 1. Generate nodes for the current group;
        ListNode *cur = head;
        for (int i = 0; i < k; ++i) {
            if (!cur) return head;
            cur = cur->next;
        }

//        2. Reverse the nodes for the current group;
        ListNode *newHead = reverseBefore(head, cur);
//        3. Reverse the nodes for the next group;
        head->next = reverseKGroup(cur, k);
        return newHead;
    }
};