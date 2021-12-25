'''
Given an array of strings words and an integer k, return the k most frequent strings.
Return the answer sorted by the frequency from highest to lowest. Sort the words with the same frequency by their lexicographical order.

Example 1:

Input: words = ["i","love","leetcode","i","love","coding"], k = 2
Output: ["i","love"]
Explanation: "i" and "love" are the two most frequent words.
Note that "i" comes before "love" due to a lower alphabetical order.

# links :
- https://stackoverflow.com/questions/65160374/typeerror-bad-operand-type-for-unary-str-for-lambda-sorting-dictionary-fun
- https://stackoverflow.com/questions/17610732/error-dictionary-update-sequence-element-0-has-length-1-2-is-required-on-dj

'''

class Solution:
    
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        
        import functools
        
        data = dict()
        
        for word in words :
            
            if word in data.keys() :
                data[word] += 1 
            else :
                data[word] = 1
        
        data = sorted(data, key = lambda x: (-data[x], x))
        
        print(data)
        
        return data[:k]
