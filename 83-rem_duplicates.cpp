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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) {
            return head;
        }
        ListNode *last = head;
        while (last->next != NULL) {
            ListNode *nex = last->next;
            if (last->val == nex->val) {
                last->next = nex->next;
            } else {
                last = nex;
            }
        }
        return head;
    }
};
