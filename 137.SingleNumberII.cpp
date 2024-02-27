class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            int res = 0;
            for (int &j: nums)
                res += ((j >> i) & 1);
            if (res % 3 != 0)
                ans |= (1 << i);
        }
        return ans;
    }
};
