/**

You are given n integers a1,a2,…,an. You choose any subset of the given numbers (possibly, none or all numbers) and negate these numbers (i. e. change x→(−x)). What is the maximum number of different values in the array you can achieve?

Input
The first line of input contains one integer t (1≤t≤100): the number of test cases.
The next lines contain the description of the t test cases, two lines per a test case.
In the first line you are given one integer n (1≤n≤100): the number of integers in the array.
The second line contains n integers a1,a2,…,an (−100≤a[i]≤100).

Output
For each test case, print one integer: the maximum number of different elements in the array that you can achieve negating numbers in the array.

Example

inputCopy
3
4
1 1 2 2
3
1 2 3
2
0 0

outputCopy
4
3
1

**/

#include <bits/stdc++.h>

int main(void)
{
      int t;
      std::cin >> t;

      while (t--)
      {
            int len;
            std::cin >> len;

            std::map<int, int> freq;
            std::map<int, bool> check;

            for (int i = 1; i <= len; i++)
            {
                  int *ele = new int();
                  std::cin >> *ele;
                  freq[*ele]++;
                  check[*ele] = false;
                  check[-*ele] = false;
                  delete ele;
            }

            long long int count = 0;

            for (auto it : freq)
            {
                  if (check[it.first] == false)
                  {
                        check[it.first] = true;
                        count++;
                        it.second--;
                  }
                  if (check[-it.first] == false && it.second > 0)
                  {
                        check[-it.first] = true;
                        count++;
                  }
            }

            std::cout << count << std::endl;
      }
      return 0;
}
