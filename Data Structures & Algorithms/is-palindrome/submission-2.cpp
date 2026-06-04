class Solution {
public:
    bool isPalindrome(string s) 
    {
        std::string clean;
        for(char c:s)
        {
            if(isalnum(c))
                clean += tolower(c);
        }
        std::string rv = clean;
        std::reverse(rv.begin(),rv.end());

        return rv == clean;
    }
};
