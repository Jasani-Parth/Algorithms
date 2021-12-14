'''

Given a string s, return the longest palindromic substring in s.

Example 1:

Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.

'''

class Solution:
    def longestPalindrome(self, s: str) -> str:
        
        for length in range(len(s),0,-1) :
            
            for i in range(0,len(s)) :
                
                if ( i + length <= len(s) ) :
                    
                    temp = s[i:i+length]
                    rev = temp[::-1]
                    
                    if ( temp == rev ) :
                        
                        return temp
                else :
                    
                    break
        
        return s[0]
