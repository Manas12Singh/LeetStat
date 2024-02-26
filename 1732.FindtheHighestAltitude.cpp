class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        short m = 0, k = 0;
        for (int &i: gain)
        {
            k += i;
            if(k>m)
                m=k;
        }
        return m;
    }
};
