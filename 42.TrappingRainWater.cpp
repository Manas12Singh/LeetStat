class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size(), m = 0, res = 0;
        vector<int> lm(n, 0);
        for (int i = 0; i < n; i++)
            lm[i] = m = max(m, height[i]);
        m = 0;
        for (int i = n - 1; i > 0; i--)
        {
            m = max(height[i], m);
            res += max(0, min(m, lm[i]) - height[i]);
        }
        return res;
    }
};
