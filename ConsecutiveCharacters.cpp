/**

The power of the string is the maximum length of a non-empty substring that contains only one unique character.
Given a string s, return the power of s.

Input: s = "leetcode"
Output: 2
Explanation: The substring "ee" is of length 2 with the character 'e' only.

**/

class Solution {
public:
    int maxPower(string s) {
        
        int len = s.length()  ;
        
        if(len == 1) return 1;
        
        int cm = 0;
        int res = 0;
        
        for(int i=1; i<len; i++) 
        {
            if(s[i] == s[i-1])
                cm++;
            else
                cm = 0;
            
            res = max(res, cm+1);
        }
        
        return res;
    }
};
