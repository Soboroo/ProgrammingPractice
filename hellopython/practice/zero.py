b = []
for i in range(int(input())):
    c = int(input())
    b.pop() if c == 0 else b.append(c)
print(sum(b))
