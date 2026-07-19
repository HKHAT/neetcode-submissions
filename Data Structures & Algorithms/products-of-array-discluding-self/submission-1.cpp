class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> res;
        vector<int> prefix;
        for(size_t i = 0;i < nums.size();i++)
        {
            int product = 1;
            int j =0;
            while(j < nums.size())
            {
                if(j != i)
                    product *= nums[j];
                j++;
            }
            res.push_back(product);

        }
    return res;
    }
};


/*
    [1,2,4,6]
    [48,24,12,8]
    product = 1;
    [1,2,4,6]
    [1,2,8,48]
    [48,24,6,1]
    [48,48,48,48]

*/
