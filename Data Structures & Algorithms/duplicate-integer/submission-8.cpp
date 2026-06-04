class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        size_t size = nums.size();
        for(size_t i = 0; i < size;i++)
        {
            size_t j = size -1;
            while(j > i)
            {
                if(nums[i] == nums[j])
                    return true;
                j--;
            }
        }

        return false;
        
    }
};