class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        int size = nums.size();
        for(size_t i = 0;i < size;i++)
        {
            count[nums[i]]++;// [1,2,2,3,3,3] k = 2 ==> mp[1] = 1 , mp[2] = 2 , mp [3] = 3
        }

        vector<pair<int,int>> vc;

        for(const auto& s:count)
        {
            vc.push_back({s.second,s.first});
            /*
                1 ==> 1
                2===> 2
                3===> 3
            */
        }

        sort(vc.rbegin(),vc.rend());

        vector<int> res;
        for(size_t i = 0; i < k;++i)
        {
            res.push_back(vc[i].second);
        }
        
        return res;
    }
};
