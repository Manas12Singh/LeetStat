class Solution
{
public:
    int helper(TreeNode *root, int k, int &res)
    {
        if (root == nullptr)
            return 0;
        int ln = helper(root->left, root->val, res);
        int rn = helper(root->right, root->val, res);
        res = max(res, ln + rn);
        return (root->val == k) ? (max(ln, rn) + 1) : 0;
    }
    int longestUnivaluePath(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        int res = 0;
        helper(root, root->val, res);
        return res;
    }
};
