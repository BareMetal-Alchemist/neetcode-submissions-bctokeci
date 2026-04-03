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
    bool hasCycle(ListNode* head) {
        ListNode* h = head;
        ListNode* t = head;
        while(h and h->next) {
            h = h->next->next;
            t = t->next;
            if (h == t) {
                return true;
            }
        }

        return false;
    }
};
