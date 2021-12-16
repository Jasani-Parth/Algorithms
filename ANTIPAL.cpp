/**
Chef just had a big argument with his best friend. He is quite upset and doesn't want anything to remind him of his pal.
Chef has to construct a binary string S of length N. He would like it to be as far from a palindrome as possible, and so he would like S to satisfy the following condition:

Let T be the reverse of S. Then, Si≠Ti for every 1≤i≤N.
Can you help Chef construct S? If there are multiple possible strings that satisfy Chef's condition, you may print any of them.

Note 1: A string S is said to be a binary string if every character of S is either '0' or '1'.
Note 2: Let S be a string of length N. String T is said to be its reverse if Ti=SN+1−i for every 1≤i≤N. For example, the reverse of 10010 is 01001 and the reverse of 0110 is 0110.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line containing one integer N — the length of the binary string Chef wants to construct.

Output Format
For each test case, output a single line containing a binary string S of length N as described in the problem statement. If no such string exists, output −1 instead.

If multiple answers exist, you may print any of them.

Constraints
1≤T≤103
1≤N≤105
The sum of N across all test cases does not exceed 105

Sample Input 1 
2
9
8

Sample Output 1 
-1
10010110

Explanation

Test Case 1: It can be proven that there is no possible valid string S.
Test Case 2: S=10010110 and T=01101001. It is easy to see that for all 1≤i≤8, Si≠Ti.

**/

#include<bits/stdc++.h>

void fast()
{
    std::ios_base::sync_with_stdio(false) ;
    std::cin.tie(0) ;
    std::cout.tie(0) ;
}

typedef long long int lli ;

int main(void)
{
    fast() ;
    int t ;
    std::cin >> t ;
    
    while(t--)
    {
        int N ;
        std::cin >> N ;
        
        if(N&1){
            std::cout << "-1\n" ;
        }
        else{
            for( int i = 0 ; i < N/2 ; i++ ) {
                std::cout << "0" ;
            }
            for( int i = 0 ; i < N/2 ; i++ ) {
                std::cout << "1" ;
            }
            std::cout << "\n" ;
        }
    }
    return 0 ;
}
