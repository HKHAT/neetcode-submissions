class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::unordered_map<int,int> mp;
        int diff;
        for(int i = 0; i < numbers.size();i++)
        {
             diff = target - numbers[i];
            if(mp.count(diff))
            {
                return {mp[diff] + 1,i + 1};
            }
            mp[numbers[i]] = i;
        }
        return {};
    }
};
