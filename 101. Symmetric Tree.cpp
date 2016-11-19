/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool same(TreeNode *a,TreeNode *b)
    {
        if(a==NULL&&b==NULL)
            return true;
        if(a==NULL||b==NULL)
            return false;
        return a->val == b->val;
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        // deque<TreeNode*> dq;
        // dq.push_back(root);
        // while(!dq.empty())
        // {
        //     TreeNode *l = dq.front(),*r=dq.back();
        //     if(!same(l->left,r->right)||!same(l->right,r->left))
        //         return false;
        //     dq.pop_front();
        //     if(!dq.empty())
        //         dq.pop_back();
        //     if(l->right)
        //     {
        //         dq.push_front(l->right);
        //         dq.push_back(r->left);
        //     }
        //     if(l->left)
        //     {
        //         dq.push_front(l->left);
        //         dq.push_back(r->right);
        //     }
        // }
        // return true;

        queue<TreeNode*> q;
        q.push(root);
        q.push(root);
        while(!q.empty())
        {
            TreeNode *l = q.front();
            q.pop();
            TreeNode *r = q.front();
            q.pop();
            if(!same(l->left,r->right)||!same(l->right,r->left))
                return false;
            if(l->right)
            {
                q.push(l->right);
                q.push(r->left);
            }
            if(l->left)
            {
                q.push(l->left);
                q.push(r->right);
            }
        }
        return true;
    }
};
