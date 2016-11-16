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
    // void postOrder(TreeNode* root,vector<int> &res)
    // {
    //     if(root)
    //     {
    //         postOrder(root->left,res);
    //         postOrder(root->right,res);
    //         res.push_back(root->val);
    //     }
    // }
    // vector<int> postorderTraversal(TreeNode* root) {
    //     vector<int> res;
    //     postOrder(root,res);
    //     return res;
    // }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(root==NULL)
            return res;
        stack<TreeNode*> stk;
        stk.push(root);
        while(!stk.empty())
        {
            root = stk.top();
            stk.pop();
            res.push_back(root->val);
            if(root->left)
                stk.push(root->left);
            if(root->right)
                stk.push(root->right);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
