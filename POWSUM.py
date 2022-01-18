'''
You are given a sequence A of N integers such that every element is a non-negative power of 2.
A sequence is called good if its sum is a non-negative power of 2. You would like to turn A into a good sequence.
To achieve this, you can perform the following operation on A:

Pick a non-empty subsequence of A, pick a positive integer X such that X≤230, and multiply every element of this subsequence by X.
Find the minimum number of operations required to turn A into a good sequence. Also, find one sequence of operations which does this. If there are multiple possible answers, you may find any of them.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line of each test case contains N space-separated integers A1,A2,…,AN.

Output Format
For each test case, print the answer in the following format:

First, print one line containing an integer M, denoting the minimum number of moves required.
Then, print 2M lines describing M operations.
Each operation is described by 2 lines.
On the first line, print two space-separated integers K and X, denoting the size of the subsequence and the multiplier for this operation.
On the second line, print K distinct space-separated integers denoting the indices of the elements chosen to be multiplied in this operation. These K integers can be printed in any order.

Constraints

1≤T≤1000
1≤N≤100
1≤Ai≤220

'''

import math 

if __name__ == "__main__" :
    
    for _ in range(int(input())) :
        
        N = int(input())
        L = list(map(int,input().split(' ')))
        
        S = sum(L)
        Min = min(L)
        
        power = int(math.log2(S))
        diff = 2**(power+1) - S ;
        
        # print("Sum : {}\nPower : {}".format(S,power))
        
        if ( S == 2**power ) :
            print(0)
        else :
            print("1\n1 {}\n{}".format((diff//Min)+1,L.index(Min)+1))
            
# i didn't found hint during contest... that if we don't need to maintain ele's to 2^power.
