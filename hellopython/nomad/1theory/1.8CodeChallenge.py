def plus(a, b):
    return int(a) + int(b)

def minus(a, b):
    return int(a) - int(b)

def times(a, b):
    return int(a) * int(b)

def division(a, b):
    return int(a) / int(b)

def negation(a):
    return -int(a)

def power(a, b):
    return int(a) ** int(b)

def reminder(a, b):
    return int(a) % int(b)

x = "6"
y = 7
print(plus(x, y))
print(minus(x, y))
print(times(x, y))
print(division(x, y))
print(negation(x))
print(power(x, y))
print(reminder(x, y))