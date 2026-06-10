class Solution {
public:

    string encode(vector<string>& strs) {

       string res;

    for(string str : strs)
    {
        res += to_string(str.size()) + "#" + str;
    }
        return res;
    }

    vector<string> decode(string s) {

        vector<string> res;

    int i = 0;

    while(i < s.size())
    {
        int j = i;

        // find #
        while(s[j] != '#')
        {
            j++;
        }

        // length of word
        int len = stoi(s.substr(i, j - i));

        // move after #
        j++;

        // extract word
        string word = s.substr(j, len);

        res.push_back(word);

        // move to next encoded string
        i = j + len;
    }

    return res;
    }
};
