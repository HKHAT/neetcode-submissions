class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> mp;
        vector<vector<string>> res;
        std::string s;
        for(size_t i = 0;i < strs.size();i++)
        {
            s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }

        for(auto& s : mp)
        {
            res.push_back(s.second);
        }

        return res;
        
    }
};
