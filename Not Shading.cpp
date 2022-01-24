/**
https://codeforces.com/problemset/problem/1627/A
**/

#include <bits/stdc++.h>

typedef long long int lli;
 
int main(void)
{
    int t;
    std::cin >> t;
 
    while (t--)
    {
        int n, m, r, c;
        lli count = 0;
        std::cin >> n >> m >> r >> c;
        int grid[n][m] = {0};
 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char c;
                std::cin >> c;
                grid[i][j] = (c == 'W' ? 1 : 0);
 
                count += grid[i][j];
            }
        }
 
        if (count == m * n)
        {
            std::cout << "-1\n";
            continue;
        }
        else if (grid[r - 1][c - 1] == 0)
        {
            std::cout << "0\n";
            continue;
        }
        else
        {
            bool flag = false;
            for (int j = 0; j < m; j++)
            {
                if (grid[r - 1][j] == 0)
                    flag = true;
            }
 
            for (int i = 0; i < n; i++)
            {
                if (grid[i][c - 1] == 0)
                    flag = true;
            }
 
            if (flag)
            {
                std::cout << "1\n";
                continue;
            }
        }
 
        std::cout << "2\n";
    }
    return 0;
}
