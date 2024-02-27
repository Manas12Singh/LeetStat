class Solution
{
public:
    void helper(TreeNode *root, vector<int> &r, vector<vector<int>> &res, int targetSum, int sum)
    {
        if (root == nullptr)
            return;
        sum += root->val;
        r.push_back(root->val);
        if (root->left == nullptr && root->right == nullptr && sum == targetSum)
            res.push_back(r);
        if (root->left != nullptr)
            helper(root->left, r, res, targetSum, sum);
        if (root->right != nullptr)
            helper(root->right, r, res, targetSum, sum);
        sum -= root->val;
        r.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<int> r;
        vector<vector<int>> res;
        helper(root, r, res, targetSum, 0);
        return res;
    }
};
