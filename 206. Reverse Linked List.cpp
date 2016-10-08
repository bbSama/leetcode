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
    ListNode* reverseList(ListNode* head) {
        ListNode *tmp1=NULL,*tmp2;
        while(head)
        {
            tmp2 = head->next;
            head->next = tmp1;
            tmp1 = head;
            head = tmp2;
        }
        return tmp1;
    }
};
