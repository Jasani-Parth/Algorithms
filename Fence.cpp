
/**

- https://codeforces.com/problemset/problem/363/B

**/

#include <bits/stdc++.h>
 
typedef long long int lli;
 
int main(void)
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
 
    lli n, k;
    std::cin >> n >> k;
 
    lli *arr = new lli[n];
    lli *sum = new lli[n];
 
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];
 
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            sum[i] = arr[i];
        else
            sum[i] = sum[i - 1] + arr[i];
    }
 
    lli H = sum[k - 1], index = k - 1;
 
    for (int i = k; i < n; i++)
    {
        if (sum[i] - sum[i - k] < H)
        {
            H = sum[i] - sum[i - k];
            index = i;
        }
    }
 
    std::cout << index - k + 2 << std::endl;
 
    return 0;
}
