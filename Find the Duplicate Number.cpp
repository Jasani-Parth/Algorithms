
/**
- https://leetcode.com/problems/find-the-duplicate-number/
**/

// ___________________________________________ SOL-1 _____________________________________________

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        std::sort(nums.begin(), nums.end());

        int n = nums.size();

        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return nums[i];
            }
        }

        return n;
    }
};

// ___________________________________________ SOL-2 _____________________________________________
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int n = nums.size();

        int *arr = new int[n]{0};

        for (int i = 0; i < n; i++)
        {
            arr[nums[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= 2)
                return i;
        }

        return 0;
    }
};