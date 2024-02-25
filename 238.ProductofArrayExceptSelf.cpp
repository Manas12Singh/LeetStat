class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int n = nums.size(), k;
        vector<int> res(n, 1);
        for (int i = 1; i < n; i++)
            res[i] = res[i - 1] * nums[i - 1];
        k = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            swap(nums[i], k);
            k *= nums[i];
        }
        for (int i = 0; i < n; i++)
            res[i] *= nums[i];
        return res;
    }
};
