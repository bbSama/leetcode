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
    bool isPalindrome(ListNode* head) {
        if(head==NULL)
            return true;
        ListNode *slow = head, *fast = head;
        while(fast->next&&fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *t1=NULL, *t2=slow->next,*t3;
        while(t2)
        {
            t3 = t2->next;
            t2->next = t1;
            t1 = t2;
            t2 = t3;
        }
        while(t1)
        {
            if((t1->val)!=(head->val))
                return false;
            t1 = t1->next;
            head = head->next;
        }
        return true; // O(n)time, O(1)space, but changed the list
        // stack<ListNode*> stk;
        // ListNode* tmp = head;
        // while(tmp)
        // {
        //     stk.push(tmp);
        //     tmp = tmp->next;
        // }
        // int n = stk.size();
        // while(stk.size()>n/2)
        // {
        //     if(head->val!=stk.top()->val)
        //         return false;
        //     head = head->next;
        //     stk.pop();
        // }
        // return true;
    }
};
