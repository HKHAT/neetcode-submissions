class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       /*
       [3,4,5,6] target 7 
       we need to iterat to every index and add the next index value 
       and check if == to target but this create a o(n^2) problem because of using tow loops
       how we can use hash map concept to just solve it in o(1) 
       first thing save the value to a hash table
       7 - 3 = 4; --> {4}
       7 - 4 = 3; ---> is 4 already saved yes then return 4 + 3;
       7 - 5 = 2;
       7 - 6 = 1;
       {4,3,2,1};

    */

    std::map<int,int> mp;
    vector<int> res;
    for(size_t i = 0;i < nums.size();i++)
    {        
        if(mp.find(target - nums[i]) != mp.end())
        {
            res.push_back(mp[target - nums[i]]);
            res.push_back(i);
            return res;
        }
        mp[nums[i]] = i;
    }
    return res;
    }
};
