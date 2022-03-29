
// https://leetcode.com/problems/partition-labels/

class Solution
{

private:
    int get_last_index(std::string s, char t)
    {
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == t)
                return i;
        }

        return 0;
    }

    int max(int x, int y)
    {
        if (x > y)
            return x;

        return y;
    }

public:
    vector<int> partitionLabels(string s)
    {

        std::vector<int> res;

        int high = 0, low = 0;

        for (int i = 0; i < s.length(); i++)
        {
            high = this->max(high, this->get_last_index(s, s[i]));

            if (i == high)
            {
                res.push_back(high - low + 1); // length = high-low+1 ;
                low = high + 1;                // updating staring point
            }
        }

        return res;
    }
};