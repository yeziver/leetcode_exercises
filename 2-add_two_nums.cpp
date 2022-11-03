//thanks leetcode... some of the values are too big to represent with my basic solution

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
    unsigned long long findNumVal(ListNode* head) {
        ListNode *cur = head;
        int lvl = 0;
        unsigned long long val = 0;
        while (cur != NULL) {
            unsigned long long temp = cur->val;
            val += temp * pow(10,lvl);
            lvl++;
            cur = cur->next;
        }
        return val;
    }
    
    ListNode* convertToList(unsigned long long num) {
        ListNode *head = new ListNode;
        int remainder = num % 10;
        head->val = remainder;
        num /= 10;
        ListNode *cur = head;
        
        while (num != 0) {
            ListNode *nextN = new ListNode;
            int remainder = num % 10;
            nextN->val = remainder;
            cur->next = nextN;
            cur = nextN;
            num /= 10;
        }
        return head;
    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        unsigned long long resVal = findNumVal(l1) + findNumVal(l2);
        
        return convertToList(resVal);
    }
};
