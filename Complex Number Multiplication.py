'''

A complex number can be represented as a string on the form "real+imaginaryi" where:

real is the real part and is an integer in the range [-100, 100].
imaginary is the imaginary part and is an integer in the range [-100, 100].
i^2 == -1.
Given two complex numbers num1 and num2 as strings, return a string of the complex number that represents their multiplications.

Example 1:

Input: num1 = "1+1i", num2 = "1+1i"
Output: "0+2i"
Explanation: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need convert it to the form of 0+2i.

'''

class Solution:
    
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        
        real1 , imag1 = int(num1.split('+')[0]) , int(num1.split('+')[1].split('i')[0])
        real2 , imag2 = int(num2.split('+')[0]) , int(num2.split('+')[1].split('i')[0])
        
        return "{}+{}i".format(real1*real2 - imag1*imag2 , real1*imag2 + real2*imag1)
