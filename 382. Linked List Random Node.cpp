/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
private:
    ListNode *head;
    int length;
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
        this->head = head;
        length = 0;
        while(head)
        {
            head = head->next;
            length++;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int n = rand()%length;
        ListNode *tmp = this->head;
        for(int i=0;i<n;i++)
            tmp = tmp->next;
        return tmp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */
// a solution for a "big" list(we cannot get its length); but it will be time limit exceeded ...
class Solution {
private:
    ListNode *head;
    ListNode *curr;
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
        this->head = head;
        this->curr = head;
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int n = rand();
        for(int i=0;i<n;i++)
        {
            if(curr->next)
                curr = curr->next;
            else
                curr = head;
        }
        return curr->val;
    }
};
