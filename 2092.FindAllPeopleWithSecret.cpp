class Solution
{
public:
    void helper(map<int, int> &s, map<int, map<int, set<int>>> &m, int n, int t)
    {
        if (s.find(n) == s.end())
            s[n] = t;
        else if (s[n] <= t)
            return;
        else
            s[n] = t;
        for (auto &i : m[n])
        {
            if (i.first >= s[n])
                for (auto &j : i.second)
                    helper(s, m, j, i.first);
        }
    }
    vector<int> findAllPeople(int n, vector<vector<int>> &meetings, int firstPerson)
    {
        map<int, map<int, set<int>>> m;
        for (auto &i : meetings)
            m[i[0]][i[2]].insert(i[1]), m[i[1]][i[2]].insert(i[0]);
        map<int, int> s;
        helper(s, m, 0, 0);
        helper(s, m, firstPerson, 0);
        vector<int> res;
        for (auto &i : s)
            res.push_back(i.first);
        return res;
    }
};
