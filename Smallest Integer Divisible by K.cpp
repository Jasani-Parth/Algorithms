/**

Given a positive integer k, you need to find the length of the smallest positive integer n such that n is divisible by k, and n only contains the digit 1.
Return the length of n. If there is no such n, return -1.

Note: n may not fit in a 64-bit signed integer.

Example 1:

Input: k = 1
Output: 1
Explanation: The smallest answer is n = 1, which has length 1.

Example 2:

Input: k = 2
Output: -1
Explanation: There is no such positive integer n divisible by 2.

Example 3:

Input: k = 3
Output: 3
Explanation: The smallest answer is n = 111, which has length 3.

**/

class Solution {
public:
    int smallestRepunitDivByK(int K) {
         
        if( ! (K % 2) ) return -1 ; // multiple of 2 ends with 0,2,4,6,8
        if( ! (K % 5) ) return -1 ; // multiple of 5 neds with 0,5
        
        long long int n = 0 ;
        
        for( int i = 1 ; i <= K ; i++ )
        {
            n = ( n * 10 + 1 ) % K ;
            
            if( n == 0 )
                return i ;
        }
        
        return -1 ;
    }
};
