/**

- https://www.codechef.com/START23C/problems/SUBMEX

**/

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(void)
{
    int t;
    std::cin >> t;

    srand(time(NULL));

    while (t--)
    {
        lli N, K, X;
        std::cin >> N >> K >> X;

        if ((N == X && K < N) || (N < X) || (K < X))
            std::cout << "-1\n";
        else
        {
            {
                for (int i = 0; i < N; i++)
                {
                    std::cout << i % X << " ";
                }
            }

            std::cout << "\n";
        }
    }
    return 0;
}
