/**
- https://leetcode.com/problems/boats-to-save-people/
**/

class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {

        std::sort(people.begin(), people.end()); // ----------------------- O(n*log(n))

        int count = 0;

        int i = 0;
        int j = people.size() - 1;

        while (i <= j)
        {
            if (people[i] + people[j] <= limit)
            {
                i++;
                j--;
            }
            else
            {
                j--;
            }

            count++;
        } // -------------------------------------------------------------- O(n)

        return count;
    }
};