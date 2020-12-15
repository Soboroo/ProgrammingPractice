def plus(a, b):
    if type(b) is int or type(b) is float:
        return a + b
    else:
        return "noob"

print(plus(1, 2))
print(plus(1, "2"))