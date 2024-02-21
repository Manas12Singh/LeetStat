class Solution
{
public:
    int rangeBitwiseAnd(int left, int right)
    {
        int n = 0;
        while (left != right)
        {
            left >>= 1;
            right >>= 1;
            n++;
        }
        while (n != 0)
            left <<= 1, n--;
        return left;
    }
};
