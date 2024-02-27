class Solution
{
public:
    int helper(TreeNode *root, int &res)
    {
        if (root == nullptr)
            return 0;
        int lh = helper(root->left, res);
        int rh = helper(root->right, res);
        res = max(res, lh + rh);
        return max(lh, rh) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int res = 0;
        helper(root, res);
        return res;
    }
};
