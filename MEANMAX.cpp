/**

JJ loves playing with averages. He has an array A of length N. He wants to divide the array A into two non-empty subsets P and Q such that the value of mean(P)+mean(Q) is as large as possible. (Note that each Ai must belong to either subset P or subset Q).

Help him find this maximum value of mean(P)+mean(Q).

As a reminder, the mean of a subset X of size M is defined as: mean(X)=∑Mi=1XiM.

For example, mean([3,1,4,5])=3+1+4+54=3.25.

Input Format
The first line contains T - the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N - the size of the array A.
The second line of each test case contains N space-separated integers A1,A2,…,AN denoting the array A.

Output Format
Output the largest value of mean(P)+mean(Q).

Your answer is considered correct if its absolute or relative error does not exceed 10−6.

Formally, let your answer be a, and the jury's answer be b. Your answer is accepted if and only if |a−b|max(1,|b|)≤10−6.

Constraints
1≤T≤100
2≤N≤1000
1≤Ai≤106

Sample Input 1 
2
2
4 5
5
2 2 2 2 2

Sample Output 1 
9.000000
4.000000

Explanation
Test case-1: We can divide the two elements into two non-empty subsets P and Q as follows: P=[4], Q=[5].

Therefore, mean(P)+mean(Q)=9.

Test case-2: In whatever way we divide the elements of the array, mean of both the subsets will always be 2.

Therefore, mean(P)+mean(Q)=4.

**/

#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;

int main(void)
{
    int t;
    std::cin >> t;

    while (t--)
    {
        lli len;
        std::cin >> len;

        std::vector<lli> vec;
        std::vector<lli> sum(len);
        double max_mean = INT_MIN;

        for (int i = 0; i < len; i++)
        {
            lli ele ;
            std::cin >> ele ;

            vec.push_back(ele);
        }

        std::sort(vec.begin(), vec.end());

        for (int i = 0; i < len; i++)
        {
            if (i != 0)
                sum[i] += sum[i - 1] + vec[i];
            else
                sum[i] = vec[i];
        }

        for (int i = 0; i < len; i++)
        {
            double P = double((sum[i] + 0.0) / (i + 1));
            double Q = double((sum[len - 1] + 0.0 - sum[i]) / (len - (i + 1)));

            if (P + Q > max_mean)
                max_mean = P + Q;
        }

        std::cout << fixed << setprecision(6) << max_mean << std::endl;
    }
    return 0;
}
