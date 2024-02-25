class Solution
{
public:
    bool increasingTriplet(vector<int> &nums)
    {
        int n = nums.size(), mtn = nums[0];
        vector<int> mti(n, 0);
        for (int i = n - 2; i > 0; i--)
            mti[i] = max(nums[i + 1], mti[i + 1]);
        for (int i = 1; i < n - 1; i++)
        {
            if (mtn < nums[i] && nums[i] < mti[i])
                return true;
            mtn = min(mtn, nums[i]);
        }
        return false;
    }
};
