class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int max = 0;
        for(size_t i = 0;i < strs.size();i++)
        {
            while(strs[i].find(strs[0]) != 0)
                    strs[0].pop_back();
        }
        return strs[0];
    }
};