class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(2, vector<int>(n, 1));
        bool k = 1;
        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
                dp[k][j] = dp[!k][j] + dp[k][j - 1];
            k = !k;
        }
        return dp[!k][n - 1];
    }
};
