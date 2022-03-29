// https://leetcode.com/problems/validate-stack-sequences/

class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {

        std::stack<int> s;
        int j = 0;

        for (int i = 0; i < pushed.size(); i++)
        {
            s.push(pushed[i]);

            while (s.size() > 0 && j < popped.size() && s.top() == popped[j])
            {
                s.pop();
                j++;
            }
        }

        return popped.size() == j;
    }
};