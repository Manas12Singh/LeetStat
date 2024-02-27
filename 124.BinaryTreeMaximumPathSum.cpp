class Solution
{
public:
    int helper(TreeNode *root, int &res)
    {
        if (root == nullptr)
            return 0;
        res=max(res,root->val);
        int ls = helper(root->left, res) + root->val;
        res = max(res, ls);
        int rs = helper(root->right, res) + root->val;
        res = max(res, rs);
        res = max(res, ls + rs - root->val);
        return max(max(ls, rs), root->val);
    }
    int maxPathSum(TreeNode *root)
    {
        int res = INT_MIN;
        helper(root, res);
        return res;
    }
};
