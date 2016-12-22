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
    int rob(TreeNode* root)
    {
        int* res = robSub(root);
        return max(res[0],res[1]);
    }
    // Great!!!! get a new method
    int* robSub(TreeNode* root)
    {
        int* res = new int[2];
        memset(res,0,sizeof(int)*2);
        if(root==NULL)
            return res;
        int* left = robSub(root->left);
        int* right = robSub(root->right);
        res[0] = max(left[0],left[1])+max(right[0],right[1]);// represent not rob root
        res[1] = root->val + left[0] + right[0];//represent rob root
        return res;
    }
    // int rob(TreeNode* root)
    // {
    //     unordered_map<TreeNode*,int> m;
    //     return rob(root,m);
    // }
    // int rob(TreeNode* root,unordered_map<TreeNode*,int>& m) {
    //     if(root==NULL)
    //         return 0;
    //     if(m.find(root)!=m.end())
    //         return m[root];
    //     int res = root->val;
    //     if(root->left)
    //         res += rob(root->left->left,m)+rob(root->left->right,m);
    //     if(root->right)
    //         res += rob(root->right->left,m)+rob(root->right->right,m);
    //     res =  max(res,rob(root->left,m)+rob(root->right,m));
    //     m[root] = res;
    //     return res;
    // }
};
