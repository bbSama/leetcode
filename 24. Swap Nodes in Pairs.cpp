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
    ListNode* swapPairs(ListNode* head) {
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *current = dummy;
        while (current->next && current->next->next) {
            ListNode *first = current->next,*second = current->next->next;
            first->next = second->next;
            current->next = second;
            current->next->next = first;
            current = first;
        }
        return dummy->next;
        // ListNode **pp = &head,*a,*b;
        // while((a=*pp)&&(b=a->next))
        // {
        //     a->next = b->next;
        //     b->next = a;
        //     *pp = b;
        //     pp = &(a->next);
        // }
        // return head;
    }
};
