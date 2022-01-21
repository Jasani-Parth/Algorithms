/**

https://codeforces.com/problemset/problem/1154/B

**/

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

bool check(lli *arr, int len)
{
    int ele = arr[0];

    for (int i = 1; i < len; i++)
        if (arr[i] != ele)
            return false;

    return true;
}

int main(void)
{
    int len;
    std::cin >> len;

    lli *arr = new lli[len];

    lli max = INT_MIN, min = INT_MAX;

    for (int i = 0; i < len; i++)
    {
        std::cin >> arr[i];

        if (arr[i] > max)
            max = arr[i];

        if (arr[i] < min)
            min = arr[i];
    }

    lli D = ((max - min) % 2 == 0 ? (max - min) / 2 : (max - min));

    for (int i = 0; i < len; i++)
    {
        if (arr[i] != max - D)
        {
            arr[i] += (arr[i] > max - D ? -D : D);
        }
    }

    std::cout << (check(arr, len) ? D : -1);

    return 0;
}
