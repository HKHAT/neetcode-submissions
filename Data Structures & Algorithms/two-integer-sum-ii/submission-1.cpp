class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::map<int,int> mp;
        for(int i = 0; i < numbers.size();i++)
        {
            int diff = target - numbers[i];
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
