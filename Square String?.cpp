/**

- https://codeforces.com/problemset/problem/1619/A

**/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    std::cin >> t;

    while (t--)
    {
        std::string s;
        std::cin >> s;

        int len = s.length();

        if (len % 2)
            std::cout << "NO\n";
        else
        {
            bool flag = false;

            for (int i = 0, j = int(len / 2); (i < int(len / 2)) && (j < len); i++, j++)
            {
                if (s[i] != s[j])
                    flag = true;
            }

            std::cout << (flag ? "NO\n" : "YES\n");
        }
    }
    return 0;
}
