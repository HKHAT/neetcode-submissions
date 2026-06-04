class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> mp;
        vector<vector<string>> res;
        for(size_t i = 0;i < strs.size();i++)
        {
        vector<int> count(26,0);
            for(char c: strs[i])
            {
              count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for(int i = 1;i < 26;++i)
            {
                key += ',' + to_string(count[i]);
            }
            mp[key].push_back(strs[i]);
        }

        for(auto& s : mp)
        {
            res.push_back(s.second);
        }

        return res;
        
    }
};
