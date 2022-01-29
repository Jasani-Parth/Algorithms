'''

- https://codeforces.com/problemset/problem/1620/b

'''

if __name__ == "__main__":

    for _ in range(int(input())):

        w, h = list(map(int, input().split(" ")))
        first = list(map(int, input().split(" ")))
        second = list(map(int, input().split(" ")))
        third = list(map(int, input().split(" ")))
        fourth = list(map(int, input().split(" ")))

        k1, XY0 = first[0], first[1:]
        k2, XYh = second[0], second[1:]
        k3, X0Y = third[0], third[1:]
        k4, XhY = fourth[0], fourth[1:]

        area1 = (w) * (X0Y[k3 - 1] - X0Y[0])
        area2 = (w) * (XhY[k4 - 1] - XhY[0])
        area3 = (h) * (XY0[k1 - 1] - XY0[0])
        area4 = (h) * (XYh[k2 - 1] - XYh[0])

        print(max(area1, area2, area3, area4))
