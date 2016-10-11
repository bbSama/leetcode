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
    int countNodes(TreeNode* n) {
        if (n == NULL) return 0;
        return 1 + countNodes(n->left) + countNodes(n->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        /*stack<TreeNode*> stk;
        while(root||!stk.empty())
        {
            while(root)
            {
                stk.push(root);
                root = root->left;
            }
            root = stk.top();
            stk.pop();
            k--;
            if(k==0)
                break;
            root = root->right;
        }
        return root->val;*/
        int count = countNodes(root->left);
        if (k <= count) {
            return kthSmallest(root->left, k);
        } else if (k > count + 1) {
            return kthSmallest(root->right, k-1-count); // 1 is counted as current node
        }
        
        return root->val;
    }
};
