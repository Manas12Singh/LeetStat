class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> res = {1, (int)numbers.size()};
        while (res[0] < res[1])
        {
            int s = numbers[res[0]-1] + numbers[res[1]-1];
            if (s == target)
                break;
            else if (s > target)
                res[1]--;
            else
                res[0]++;
        }
        return res;
    }
};
