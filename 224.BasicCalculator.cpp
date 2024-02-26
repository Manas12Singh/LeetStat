class Solution
{
public:
    int calculate(string s)
    {
        stack<int> ns;
        int n = 0, sn = 1, res = 0;
        for (char c : s)
        {
            if (isdigit(c))
                n = n * 10 + (c - '0');
            else if (c == '+')
            {
                res += sn * n;
                n = 0;
                sn = 1;
            }
            else if (c == '-')
            {
                res += sn * n;
                n = 0;
                sn = -1;
            }
            else if (c == '(')
            {
                ns.push(res);
                ns.push(sn);
                res = 0;
                sn = 1;
            }
            else if (c == ')')
            {
                res += sn * n;
                n = 0;
                res *= ns.top();
                ns.pop();
                res += ns.top();
                ns.pop();
            }
        }
        if (n != 0)
            res += sn * n;
        return res;
    }
};
