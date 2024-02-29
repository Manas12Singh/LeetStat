class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        vector<vector<int>> dp(2, vector<int>(n, 0));
        dp[1][0] = 1;
        bool k = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (obstacleGrid[i][j] == 1)
                    dp[k][j] = 0;
                else
                {
                    dp[k][j] = dp[!k][j];
                    if (j != 0)
                        dp[k][j] += dp[k][j - 1];
                }
            }
            k = !k;
        }
        return dp[!k][n - 1];
    }
};
