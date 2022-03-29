// https://leetcode.com/problems/counting-bits/

class Solution
{

public:
    int bitcount(int n)
    {
        int count = 0;

        while (n > 0)
        {
            count++;
            n = n & (n - 1);
        }

        return count;
    }

    vector<int> countBits(int n)
    {

        std::vector<int> res;

        for (int i = 0; i <= n; i++)
        {
            res.push_back(bitcount(i));
        }

        return res;
    }
};