A1, A2, A3 = map(int, input().split())

diff = 2 * A2 - (A1 + A3)

if diff >= 0:
    print(diff)
else:
    print((-diff + 1) // 2)
