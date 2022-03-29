// https://leetcode.com/problems/is-subsequence/

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {

        // O(len(s)) time algorithm

        int len_s = s.length();
        int len_t = t.length();

        // some filters !!

        if (len_t < len_s)
            return false;
        if (len_s == len_t)
            return s == t;

        int j = 0;

        for (int i = 0; i < len_t; i++)
        {
            if (j < len_s && s[j] == t[i])
            {
                j++;
            }
            else if (j == len_s)
                return true;
        }

        return j == len_s;
    }
};