class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        for(size_t i = 0;i < nums.size();i++)
        {
            if(std::find(nums.begin() + i + 1,nums.end(),nums[i]) != nums.end())
                return true;
        }
        return false;
    }

};