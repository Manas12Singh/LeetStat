class Solution
{
public:
    bool isHappy(int n)
    {
        set<int> s;
        while (s.find(n) == s.end())
        {
            s.insert(n);
            int t = 0;
            while (n != 0)
            {
                t += pow(n % 10, 2);
                n /= 10;
            }
            n = t;
        }
        return n == 1;
    }
};
