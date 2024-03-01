class Solution
{
public:
    string maximumOddBinaryNumber(string s)
    {
        int n = s.length();
        int i = -1;
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == '1')
                swap(s[++i], s[j]);
        }
        if (s[n - 1] != '1')
            swap(s[i], s[n - 1]);
        return s;
    }
};
