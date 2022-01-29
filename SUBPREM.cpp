/**
- https://www.codechef.com/LTIME104C/problems/SUBPERM
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

void print(int sz)
{
    for (int i = 1; i <= sz; i++)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

void solve()
{
    int N, K;
    std::cin >> N >> K;

    if (N == K)
    {
        print(N);
    }
    else if (K < 2)
    {
        std::cout << "-1" << std::endl;
    }
    else
    {
        for (int i = 1; i < K; i++)
            std::cout << i << " ";

        for (int i = N; i >= K; i--)
            std::cout << i << " ";

        std::cout << std::endl;
    }
}

int main(void)
{
    int t;
    std::cin >> t;

    while (t--)
    {
        solve();
    }
}
