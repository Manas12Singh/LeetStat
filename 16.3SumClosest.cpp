class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size(), res = INT_MAX, cd, rd;
        for (int i = 0; i < n - 2; i++)
        {
            int j = i + 1, k = n - 1;
            while (j < k)
            {
                int s = nums[i] + nums[j] + nums[k];
                if (s == target)
                    return s;
                if (res == INT_MAX || abs(target - s) < abs(target - res))
                    res = s;
                if (s < target)
                    j++;
                else
                    k--;
            }
        }
        return res;
    }
};
