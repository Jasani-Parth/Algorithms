
'''

You are given a binary string S of length N. Your task is to check if there exists a substring of S which is the binary representation of a prime number.
Formally, check if there exist integers L and R such that 1≤L≤R≤N, and the substring SLSL+1SL+2…SR, when treated as a binary integer, is prime.
Print "Yes" if such a substring exists, and "No" if it doesn't.

Sample Input 1 
3
1
111
101101

Sample Output 1 
No
Yes
Yes

'''

for _ in range(int(input())) :
    
    S = input()
    
    if "10" in S or "11" in S :
        
        print("Yes")
    
    else :
        
        print("No")
