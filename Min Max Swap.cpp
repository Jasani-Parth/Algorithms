/**

- https://codeforces.com/contest/1631/problem/A

**/

#include <bits/stdc++.h>
 
typedef long long int lli;
 
lli find_max(std::vector<lli> vec)
{
 
    lli max = INT_MIN;
    for (int i = 0; i < vec.size(); i++)
    {
        if (max < vec[i])
            max = vec[i];
    }
 
    return max;
}
 
int main(void)
{
    int t;
    std::cin >> t;
 
    while (t--)
    {
        lli len;
        std::cin >> len;
        std::vector<lli> a, b;
 
        for (int i = 0; i < len; i++)
        {
            int ele;
            std::cin >> ele;
            a.push_back(ele);
        }
 
        for (int i = 0; i < len; i++)
        {
            int ele;
            std::cin >> ele;
            b.push_back(ele);
        }
 
        lli max_b = find_max(b);
 
        for (int i = 0; i < len; i++)
        {
            if (a[i] < b[i] && a[i] < max_b)
            {
                int t = a[i];
                a[i] = b[i];
                b[i] = t;
            }
        }
 
        lli max_a = find_max(a);
        max_b = find_max(b);
 
        std::cout << max_b * max_a << std::endl;
    }
    return 0;
}
