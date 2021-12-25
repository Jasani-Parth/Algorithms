/**
You have become good friends with Chef. Right now, Chef is busy in the kitchen, so he asked you to solve a problem for him.
Consider a list of integers L. Initially, L contains the integers 1 through N, each of them exactly once (but it may contain multiple copies of some integers later). The order of elements in L is not important. You should perform the following operation N−1 times:
Choose two elements of the list, let's denote them by X and Y. These two elements may be equal.
Erase the chosen elements from L.
Append the number X+Y+X⋅Y to L.
At the end, L contains exactly one integer. Find the maximum possible value of this integer. Since the answer may be large, compute it modulo 1,000,000,007 (109+7).

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.

Output
For each test case, print a single line containing one integer ― the maximum possible value of the final number in the list modulo 109+7.

Constraints
1≤T≤100,000
1≤N≤1,000,000

Subtasks
Subtask #1 (20 points): 1≤T,N≤25
Subtask #2 (80 points): original constraints

Sample Input 1 
3
1
2
4
Sample Output 1 
1
5
119 **/

#include<iostream>
#include<vector>

typedef long long int lli ;
const lli M = 1e9+7 ;

int main(void)
{
      int t ;
      std::cin >> t ;

      std::vector<lli> Table ;
      Table.push_back(1) ;

      for( int i = 2 ; i <= 1000000 ; i++ )
      {
            Table.push_back( ((Table[i-2]%M * (i+1)%M)%M + i%M)%M ) ;
      }
      
      while(t--)
      {
            lli N ;
            std::cin >> N ;
            
            std::cout << Table[N-1] << std::endl ;
      }
      return 0 ;
}
