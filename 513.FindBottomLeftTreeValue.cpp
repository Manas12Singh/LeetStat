class Solution
{
public:
    int findBottomLeftValue(TreeNode *root)
    {
        int res;
        int h = -1;
        queue<pair<TreeNode *, int>> q;
        q.push({root, 0});
        while (!q.empty())
        {
            auto t = q.front();
            q.pop();
            if (t.second > h)
                h = t.second, res = t.first->val;
            if (t.first->left)
                q.push({t.first->left, h + 1});
            if (t.first->right)
                q.push({t.first->right, h + 1});
        }
        return res;
    }
};
