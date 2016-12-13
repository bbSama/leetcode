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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode *t1 = &dummy,*t2;
        while(t1->next)
        {
            t2 = t1->next;
            if(t2->val==val)
                t1->next = t2->next;
            else
                t1 = t1->next;
        }
        return dummy.next;
        /** recursive version
        if(head==NULL) return NULL;
        head->next = removeElements(head->next,val);
        return head->val==val ? head->next : head;
        */
    }
};
