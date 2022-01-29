/**
- https://codeforces.com/problemset/problem/1618/A
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

void input(std::vector<lli> &vec, lli sz)
{
    for (int i = 0; i < sz; i++)
    {
        lli *ele = new lli();
        std::cin >> *ele;
        vec.push_back(*ele);
        delete ele;
    }
}

lli find_max(std::vector<lli> vec)
{
    lli m = INT_MIN;

    for (int i = 0; i < vec.size(); i++)
        m = max(m, vec[i]);

    return m;
}

int main(void)
{
    int t;
    std::cin >> t;

    while (t--)
    {
        std::vector<lli> vec;
        input(vec, 7);

        /** first two element always gives a,b 
         *  
         *  Proof :
         *          think for min ele case {1,1,c} b => {1,1,....,2+c} so choosing a & b minimum there is possibility 
         *          that a+b < c so we can confirm about a and b . 
         *   **/

        std::cout << vec[0] << " " << vec[1] << " " << find_max(vec) - vec[0] - vec[1] << std::endl;
    }

    return 0;
}
