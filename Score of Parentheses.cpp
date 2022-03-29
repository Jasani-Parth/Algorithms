// https://leetcode.com/problems/score-of-parentheses/

class Solution
{
public:
    int scoreOfParentheses(string s)
    {

        int res = 0;

        std::stack<int> S;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
                S.push(0);
            else
            {
                int *temp = new int();

                *temp = 0;

                while (S.top() != 0)
                {
                    *temp += S.top();
                    S.pop();
                }

                *temp = max(2 * (*temp), 1);
                S.pop();
                S.push(*temp);

                delete temp;
            }
        }

        while (!S.empty())
        {
            res += S.top();
            S.pop();
        }

        return res;
    }
};