/**

Chef calls a sequence of integers A1,A2,…,AN stable if all the elements in the sequence are equal.

Chef gives you a sequence A1,A2,…,AN. You may perform the following operations on the sequence any number of times (possibly 0):

Select any prefix A[1…k] such that max(A[1…k])=A[k] and set A[i]:=A[k] ∀i∈[1,k−1]. For example, if the sequence A=[3,1,4,5,9], then choosing k=3 yields the sequence [4,4,4,5,9].

Select any segment A[L…R] and shift the segment cyclically to the left keeping other elements unchanged. For example, if the sequence A=[3,4,1,5,9], then choosing L=2 and R=4 yields the sequence [3,1,5,4,9].

Chef is asking you to find the minimum number of operations required to make the sequence stable.

It is guaranteed that you can always make the sequence stable using such operations.

Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line of each test case contains N space-separated integers A1,A2,…,AN.
Output Format
For each test case, print the minimum number of operations required to make the sequence stable.

Constraints
1≤T≤103
1≤N≤100
1≤Ai≤100 for each valid i
Sample Input 1 
2
3
1 1 1
2
69 96
Sample Output 1 
0
1
Explanation
Test Case 1: The sequence is already stable, so we require 0 operations.

Test Case 2: We can apply operation 1 on the prefix A[1…2] which converts A into [96,96] which is stable.

**/


#include<bits/stdc++.h>

void fast()
{
    std::ios_base::sync_with_stdio(false) ;
    std::cin.tie(0) ;
    std::cout.tie(0) ;
}

typedef long long int lli ;

bool check(std::vector<int> v) {
    
    int ele = v[0] ;
    
    for( int i = 1 ; i < v.size() ; i++ ) {
        if( ele != v[i] ){
            return false ;
        }
    }
    
    return true ;
}

int main(void)
{
    fast() ;
    int t ;
    std::cin >> t ;
    
    while(t--)
    {
        int len ;
        std::cin >> len ;
        
        std::vector<int> vec ;
        
        for( int i = 0 ; i < len ; i++ ) {
            int *ele = new int() ;
            std::cin >> *ele ;
            vec.push_back(*ele) ;
            delete ele ;
        }
        
        int max = INT_MIN ;
        int index = 0 ;
        
        for( int i = 0 ; i < len ; i++ ) {
            if( max <= vec[i] ) {
                max = vec[i] ;
                index = i ;
            }
        }
        
        if( check(vec) ) {
            std::cout << '0' << std::endl;
        }
        else if( index == len-1 ) {
            std::cout << '1' << std::endl;
        }
        else {
            std::cout << '2' << std::endl;
        }
    }
    
    return 0 ;
}
