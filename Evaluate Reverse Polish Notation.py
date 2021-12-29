'''

Evaluate the value of an arithmetic expression in Reverse Polish Notation.
Valid operators are +, -, *, and /. Each operand may be an integer or another expression.

Note that division between two integers should truncate toward zero.

It is guaranteed that the given RPN expression is always valid. That means the expression would always evaluate to a result, and there will not be any division by zero operation.

 

Example 1:

Input: tokens = ["2","1","+","3","*"]
Output: 9

Explanation: ((2 + 1) * 3) = 9

'''
class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        
        L = list()
        
        for t in tokens :
            
            if( t == "+" or t == "-" or t == "*" or t == "/") :
                
                a = int(L[len(L)-1])
                L.pop()
                b = int(L[len(L)-1])
                L.pop()
                
                if t == "+" :
                    L.append(a+b)
                elif t == "-" :
                    L.append(b-a)
                elif t == "*" :
                    L.append(a*b)
                elif t == "/" :
                    L.append(b/a)
            else :
                
                L.append(int(t))
        
        return int(L[0])
