/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 // delete node without giving you the head
class Solution {
public:
    void deleteNode(ListNode* &node) {
        if(node==NULL)
            return;
        if(node->next == NULL)
        {
            node == NULL;
            return;
        }
        ListNode *tmp = node->next;
        node->val = tmp->val;
        node->next = tmp->next;
        delete tmp;
    }
};
