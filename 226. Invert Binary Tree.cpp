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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
      /*queue<TreeNode*> q;
        TreeNode *tmp = root,*tmp2;
        q.push(tmp);
        while(!q.empty())
        {
            tmp = q.front();
            q.pop();
            tmp2 = tmp->left;
            tmp->left = tmp->right;
            tmp->right = tmp2;
            if(tmp->left)
                q.push(tmp->left);
            if(tmp->right)
                q.push(tmp->right);
        }*/
        invertTree(root->left);
        invertTree(root->right);
        TreeNode* tmp = root->left;
        root->left = root->right;
        root->right = tmp;
        return root;
    }
};
