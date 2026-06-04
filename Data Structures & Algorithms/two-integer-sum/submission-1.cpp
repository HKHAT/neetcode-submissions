class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    for(size_t i = 0;i < nums.size();i++)
    {
        for(size_t j = i + 1;j < nums.size();j++)
        {
        if(nums[i] + nums[j] == target)
        {
            res.insert(res.begin(),i);
            res.insert(res.begin() + 1,j);
            return res;
        }
        }
    }
    return res;
    }
};
