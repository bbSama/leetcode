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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *n1=NULL,*n2;
        vector<int> s1,s2;
        int val=0,carry=0;
        while(l1)
        {
            s1.push_back(l1->val);
            l1 = l1->next;
        }
        while(l2)
        {
            s2.push_back(l2->val);
            l2 = l2->next;
        }
        for(int i=s1.size(),j=s2.size();i||j||carry;)
        {
            val = carry;
            if(i)
                val+=s1[--i];
            if(j)
                val+=s2[--j];
            carry = val>9;
            val -= carry*10;
            n2 = new ListNode(val);
            n2->next = n1;
            n1 = n2;
        }
        return n2;
    }
};
