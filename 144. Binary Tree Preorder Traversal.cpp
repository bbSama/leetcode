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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL)
            return res;
        stack<TreeNode*> stk;
        stk.push(root);
        while(!stk.empty())
        {
            root = stk.top();
            res.push_back(root->val);
            stk.pop();
            if(root->right)
                stk.push(root->right);
            if(root->left)
                stk.push(root->left);
        }
        return res;
    }
};
