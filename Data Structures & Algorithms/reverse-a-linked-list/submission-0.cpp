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
    ListNode* reverseList(ListNode* head) {
        // swap values in window... recursion?
        ListNode* curr;

        if (!head || !head->next)
            return head;
        
        curr = reverseList(head->next);

        head->next->next = head;
        head->next = nullptr;

        return curr;
    }
};
