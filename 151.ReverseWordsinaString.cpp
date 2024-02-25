class Solution
{
public:
    void rev(string &s, int l, int r)
    {
        while (l < r)
            swap(s[l++], s[r--]);
    }
    string reverseWords(string s)
    {
        int l = 0, r = s.length() - 1,n=0;
        while (s[l] == ' ' && l < r)
            l++;
        while (s[r] == ' ' && l < r)
            r--;
        string res;
        for (int i = r; i >=l; i--)
            if (s[i] != ' ' || s[i] != s[i +1])
                res.push_back(s[i]),n++;
        l = 0;
        for (r = 0; r < n; r++)
        {
            if (res[r] == ' ')
            {
                rev(res, l, r-1);
                l = r + 1;
            }
        }
        rev(res,l,n-1);
        return res;
    }
};
