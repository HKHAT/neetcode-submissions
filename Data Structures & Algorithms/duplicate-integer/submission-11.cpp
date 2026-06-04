class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,bool> mp;
        size_t j = nums.size() - 1;
        size_t size = j + 1;
        for(size_t i = 0; i < nums.size();i++)
        {
            if(mp[nums[i]] == true)
            {
                return true;
            }
            mp[nums[i]] = true;
        }

        return false;
        
    }
};