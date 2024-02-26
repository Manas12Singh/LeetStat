class Solution
{
public:
    bool isvowel(char i)
    {
        return i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u';
    }
    int maxVowels(string s, int k)
    {
        int n = s.length(), res = 0, c = 0, j = 0;
        for (int i = 0; i < n; i++)
        {
            if (i - j == k)
            {
                if (isvowel(s[j]))
                    c--;
                j++;
            }
            if (isvowel(s[i]))
                c++;
            res = max(c, res);
        }
        return res;
    }
};
