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
    void reorderList(ListNode* head) {
        if(!head or !head->next) return;
        ListNode *tail = head;
        while(tail->next and tail->next->next) tail = tail->next;
        ListNode *secondLast = tail;
        ListNode *last = tail->next;
        secondLast->next = nullptr;
        last->next = head->next;
        head->next = last;
        reorderList(last->next);
        
    }
};
