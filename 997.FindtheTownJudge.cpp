class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        vector<int> m(n, 0);
        for (auto &i : trust)
        {
            m[i[0] - 1]--;
            m[i[1] - 1]++;
        }
        for (int i = 0; i < n; i++)
            if (m[i] == n - 1)
                return i + 1;
        return -1;
    }
};
