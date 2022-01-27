/**

- https://codeforces.com/problemset/problem/1626/A

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

        std::map<char, int> char_map;

        for (int i = 0; i < s.length(); i++)
        {
            char_map[s[i]]++;
        }

        for (auto it : char_map)
        {
            if (it.second == 2)
            {
                std::cout << it.first << it.first;
            }
            else
            {
                std::cout << it.first;
            }
        }

        std::cout << std::endl;
    }
    return 0;
}
