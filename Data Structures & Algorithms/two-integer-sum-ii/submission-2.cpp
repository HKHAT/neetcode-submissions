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
                vector<int> v = {mp[diff] + 1,i + 1};
                return v;
            }
            mp[numbers[i]] = i;
        }
        return {};
    }
};
