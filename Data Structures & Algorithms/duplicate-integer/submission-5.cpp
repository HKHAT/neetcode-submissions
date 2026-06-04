class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int,bool> mp;

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