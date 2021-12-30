'''

Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5

Example 2:

Input: c = 3
Output: false

'''

class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        
        n = int(0)
        squares = list()
        
        while( n**2 <= c ) :
            squares.append(n**2)
            n += 1
        
        high = len(squares)-1
        low = 0
        
        while( low <= high ) :
            
            if( squares[low] + squares[high] == c ) :
                return True
            
            if( squares[low] + squares[high] > c ) :
                high -= 1
            else :
                low += 1
        
        return False
