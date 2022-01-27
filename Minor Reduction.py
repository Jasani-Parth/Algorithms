'''
- https://codeforces.com/problemset/problem/1626/B
'''

if __name__ == "__main__":

    for _ in range(int(input())):

        N = [int(d) for d in input()]

        for i in range(len(N) - 2, -1, -1):

            if N[i + 1] + N[i] >= 10:

                N[i + 1] += N[i] - 10
                N[i] = 1
                break

        else:
            N[1] += N[0]
            N.pop(0)

        print("".join(list(map(str, N))))
