import sys
input()
a = set(sys.stdin.readline().split())
input()
for i in list(sys.stdin.readline().split()):
    print(0 if set(i).isdisjoint(a) else 1)
