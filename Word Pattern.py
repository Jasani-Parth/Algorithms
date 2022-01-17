'''

Given a pattern and a string s, find if s follows the same pattern.
Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

Example 1:

Input: pattern = "abba", s = "dog cat cat dog"
Output: true

Example 2:

Input: pattern = "abba", s = "dog cat cat fish"
Output: false

Example 3:

Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false

'''

class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        
        L = s.split(' ')
        Data = dict()
        
        length = len(pattern)
        
        if len(L) == length : 
            
            for i in range(0,length) :
                
                if pattern[i] in Data.keys() :
                    
                    if Data[pattern[i]] != L[i] :
                        return False
                    
                elif L[i] not in Data.values() :
                    Data[pattern[i]] = L[i]
                else :
                    return False
        else :
            return False
    
        
        return True
