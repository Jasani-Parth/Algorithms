/**

Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

Example 1:

Input: num1 = "2", num2 = "3"
Output: "6"

**/

class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        
        if num1 == '0' or num2 == '0' :
            return '0'
        
        L = []
        l1 = len(num1)
        l2 = len(num2)
        
        for i in range(l2-1,-1,-1) :
            
            temp = []
            
            b = i
            
            while b < l2-1 :
                temp.append(0)
                b+=1
                
            
            for j in range(l1-1,-1,-1) :
                
                temp.insert(0,int(num2[i]) * int(num1[j]))
            
            f = i
            
            while f > 0 :
                temp.insert(0,0)
                f-=1
            
            L.append(temp)
        
        s = []
        
        for i in range(len(L[0])) :
            
            t = int(0)
            
            for j in range(len(L)) :
                
                t += L[j][i]
            
            s.append(t)
        
        v = int(0)
        
        for i in range(len(s)-1,-1,-1) :
            
            s[i] += v
            v=0
            
            if s[i] > 9 :
                v = s[i]//10
                s[i] = s[i] - (s[i]//10)*10
        
        if v>0 :
            s.insert(0,v)
            
        ans = "".join(map(str,s))
        
        return ans
