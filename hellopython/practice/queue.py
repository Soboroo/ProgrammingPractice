from collections import deque
import sys
dq = deque()
for i in range(int(input())):
    a = list(sys.stdin.readline().split())
    if a[0] == 'push':
        dq.appendleft(a[1])
    elif a[0] == 'pop':
        print(dq.pop() if len(dq) > 0 else -1)
    elif a[0] == 'size':
        print(len(dq))
    elif a[0] == 'empty':
        print(1 if len(dq) == 0 else 0)
    elif a[0] == 'front':
        print(dq[-1] if len(dq) > 0 else -1)
    elif a[0] == 'back':
        print(dq[0] if len(dq) > 0 else -1)
