"""
Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:

'.' Matches any single character.​​​​
'*' Matches zero or more of the preceding element.
The matching should cover the entire input string (not partial).

Example :
  Input: s = "aab", p = "c*a*b" 
  Output: true

"""

class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        
        import re 
        
        new_patt = re.compile(p)
        
        matches = new_patt.findall(s)
        
        for match in matches :
            if match == '' :
                matches.remove(match)
        
        print(matches)
        
        if len(matches)==1 and matches[0] == s :
            return True
        
        return False
