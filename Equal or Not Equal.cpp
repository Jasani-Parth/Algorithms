/**

- https://codeforces.com/problemset/problem/1620/A

**/

#include <bits/stdc++.h>

int main(void)
{
    int t;
    std::cin >> t;

    while (t--)
    {
        std::string s;
        std::cin >> s;

        int count = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'N')
                count++;
        }

        if (count == 1)
            std::cout << "NO" << std::endl;
        else
            std::cout << "YES" << std::endl;
    }
    return 0;
}
