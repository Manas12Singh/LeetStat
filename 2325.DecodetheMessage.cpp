class Solution
{
public:
    string decodeMessage(string key, string message)
    {
        vector<short> m(26, -1);
        for (int i = 0, j = 0; i < key.length() && j < 26; i++)
            if (key[i] != ' ' && m[key[i]-'a']==-1)
                m[key[i]-'a'] = j++;
        for (int i = 0; i < message.length(); i++)
            if (message[i] != ' ')
                message[i] = m[message[i] - 'a']+'a';
        return message;
    }
};
