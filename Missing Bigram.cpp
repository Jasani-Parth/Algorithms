
/**
 * https://codeforces.com/problemset/problem/1618/B
**/

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

template <class T>
void input(std::vector<T> &vec, lli sz)
{
    for (int i = 0; i < sz; i++)
    {
        T *ele = new T();
        std::cin >> *ele;
        vec.push_back(*ele);
        delete ele;
    }
}

int main(void)
{
    int t;
    std::cin >> t;

    while (t--)
    {
        lli n;
        std::cin >> n;
        std::vector<std::string> vec;

        input(vec, n - 2);

        std::string s = "";

        s += vec[0][0];

        for (int i = 0; i < vec.size() - 1; i++)
        {
            if (vec[i][1] == vec[i + 1][0])
            {
                s += vec[i][1];
            }
            else
            {
                s += vec[i][1];
                s += vec[i + 1][0];
            }
        }

        s += vec[vec.size() - 1][1];

        while (n > s.length())
            s += "a";

        std::cout << s << std::endl;
    }
    return 0;
}
