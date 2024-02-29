class Solution
{
public:
    bool isEvenOddTree(TreeNode *root)
    {
        queue<TreeNode *> q1, q2;
        q1.push(root);
        while (!q1.empty() || !q2.empty())
        {
            int j = -1;
            while (!q1.empty())
            {
                TreeNode *k = q1.front();
                q1.pop();
                if (k->val % 2 == 0 || j >= k->val)
                    return false;
                j = k->val;
                if (k->left)
                    q2.push(k->left);
                if (k->right)
                    q2.push(k->right);
            }
            j = INT_MAX;
            while (!q2.empty())
            {
                TreeNode *k = q2.front();
                q2.pop();
                if (k->val % 2 == 1 || j <= k->val)
                    return false;
                j = k->val;
                if (k->left)
                    q1.push(k->left);
                if (k->right)
                    q1.push(k->right);
            }
        }
        return true;
    }
};
