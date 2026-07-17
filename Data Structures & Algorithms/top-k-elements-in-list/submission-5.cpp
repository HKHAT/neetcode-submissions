class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> val;
        for(int x:nums)
            mp[x]++;
        
        while(k--)
        {
            int z = 0;
            int y = -1;
            for(auto& j:mp)
            {
                if(j.second > y)
                {
                    y = j.second;
                    z = j.first;
                }
            }

            val.push_back(z);
            mp.erase(z);
        }
        return val;
    }
};
