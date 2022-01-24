'''
https://codeforces.com/problemset/problem/1629/A
'''

if __name__ == "__main__":

    for _ in range(int(input())):

        N, RAM = list(map(int, input().split(" ")))
        a = list(map(int, input().split(" ")))
        b = list(map(int, input().split(" ")))

        Tups = [[a[i], b[i]] for i in range(N)]

        Tups = list(sorted(Tups, key=lambda x: x[0]))

        index = int(0)

        while index < N and RAM >= Tups[index][0]:

            RAM += Tups[index][1]
            index += 1

        print(RAM)
