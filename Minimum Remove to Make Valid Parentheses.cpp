// https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/

class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {

        int n = s.length();
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                continue;
            else if (s[i] == '(')
                st.push(i);
            else
            {
                if (!st.empty() && s[st.top()] == '(')
                    st.pop();
                else
                    st.push(i);
            }
        }

        while (!st.empty())
        {
            s.erase(st.top(), 1);
            st.pop();

            // ref : https://www.geeksforgeeks.org/stdstringerase-in-cpp/
            // syntax 3
        }

        return s;
    }
};