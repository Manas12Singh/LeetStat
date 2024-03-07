class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size(), i = n - 2;
        while (i > -1 && nums[i] >= nums[i + 1])
            i--;
        if (i != -1)
        {
            int k = i;
            for (int j = i+1; j < n; j++)
                if (nums[j] > nums[i])
                    k = j;
            swap(nums[i], nums[k]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
};
