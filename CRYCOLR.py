
'''

You have a total of 3N balls of colours Red, Blue and Green. There are exactly N balls of each colour.
These 3N balls are now distributed to 3 boxes such that each box contains exactly N balls. You are given the contents of each box.
You would like the 1st box to contain all the red balls, the 2nd box to contain all the green balls, and the 3rd box to contain all the blue balls. Note that the given order of boxes is important here — it is not enough for each box to contain only balls of a single colour.
To achieve this, you can perform the following operation several (possibly, zero) times:

Pick any two distinct boxes, pick any one ball from each of these two boxes, and swap them.
Determine the minimum number of operations required to satisfy the given condition.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of 4 lines of input.
The first line of each test case contains a single integer N, denoting the number of balls of each colour.
The i-th of the next three lines contains three space-separated integers Ri,Gi and Bi — the number of red, green, and blue balls in the i-th box respectively.

Output Format
For each test case, output a single line containing one integer — the minimum number of operations required such that the given condition is satisfied.

Constraints
1≤T≤1000
1≤N≤1000
0≤Ri,Gi,Bi≤N
R1+G1+B1=R2+G2+B2=R3+G3+B3=N
R1+R2+R3=G1+G2+G3=B1+B2+B3=N

Subtasks
Subtask #1 (100 points): Original constraints

Sample Input 1 
2
3
3 0 0
0 3 0
0 0 3
5
2 1 2
1 4 0
2 0 3
Sample Output 1 
0
3

Explanation
Test case 1: Initially,

The first box has 3 red balls and none of any other colours
The second box has 3 green balls and none of any other colours
The third box has 3 blue balls and none of any other colours
The condition is already satisfied, and so no moves are required.

Test case 2: One sequence of moves is as follows:

Swap a green ball from the first box with a red ball from the second box.
Swap a blue ball from the first box with a red ball from the third box.
Once again, swap a blue ball from the first box with a red ball from the third box.
Now the first box has only red balls, the second has only green balls, and the third has only blue ones — as required. It can be verified that no sequence of less than three moves achieves this result.

'''

if __name__ == "__main__" :
    
    for _ in range(int(input())) :
        
        n = int(input())
        R = list(map(int,input().split(' ')))
        G = list(map(int,input().split(' ')))
        B = list(map(int,input().split(' ')))
        
        if( R[0] == n and B[2] == n  and G[1] == n) :
            print(0)
        else :
            f = R[1] + R[2] + G[2]
            s = G[0] + B[0] + B[1]
            print(max(f,s))
