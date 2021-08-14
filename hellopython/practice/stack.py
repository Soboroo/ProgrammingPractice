import sys
dq = []
for i in range(int(input())):
    a = list(sys.stdin.readline().split())
    if a[0] == 'push':
        dq.append(a[1])
    elif a[0] == 'pop':
        print(dq.pop() if len(dq) > 0 else -1)
    elif a[0] == 'size':
        print(len(dq))
    elif a[0] == 'empty':
        print(1 if len(dq) == 0 else 0)
    elif a[0] == 'top':
        print(dq[-1] if len(dq) > 0 else -1)
