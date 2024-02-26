class Solution
{
public:
    void helper(TreeNode *root, int n, int &res)
    {
        n = n * 10 + root->val;
        if (root->left == nullptr && root->right == nullptr)
            res += n;
        if (root->right != nullptr)
            helper(root->right, n, res);
        if (root->left != nullptr)
            helper(root->left, n, res);
    }
    int sumNumbers(TreeNode *root)
    {
        int res = 0;
        helper(root, 0, res);
        return res;
    }
};
