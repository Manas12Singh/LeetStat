class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int arr[26];
        for (auto &i : magazine)
            arr[i - 'a']++;
        for (auto &i : ransomNote)
        {
            arr[i - 'a']--;
            if (arr[i - 'a'] == -1)
                return false;
        }
        return true;
    }
};
