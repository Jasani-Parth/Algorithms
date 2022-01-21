'''
https://codeforces.com/problemset/problem/1154/A
'''

if __name__ == "__main__":

    a, b, c, d = list(map(int, input().split(" ")))

    S = max(a, b, c, d)

    L = [S - a, S - b, S - c, S - d]

    print(" ".join([str(i) for i in L if i != 0]))
