'''

We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.

 

Example 1:

Input: word = "USA"
Output: true
Example 2:

Input: word = "FlaG"
Output: false

'''

class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        n = len(word)

        if n == 1:
            return True

        if word[0].isupper() and word[1].isupper():
            for i in range(2, n):
                if not word[i].isupper():
                    return False
        else:
            for i in range(1, n):
                if word[i].isupper():
                    return False

        return True
