class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        int n = tokens.size();
        int i = 0, j = n - 1, res = 0;
        while (i <= j) {
            if (tokens[i] <= power)
                power -= tokens[i++], res++;
            else if (i != j && res > 0)
                power += tokens[j--], res--;
            else
                break;
        }
        return res;
    }
};
