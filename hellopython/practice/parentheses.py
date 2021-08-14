while True:
    stack = []
    dic = {']': '[', '}': '{', ')': '('}
    a = input()
    answer = True
    if a == '.':
        break
    for i in a:
        if i == '[' or i == '{' or i == '(':
            stack.append(i)
        if i == ']' or i == '}' or i == ')':
            try:
                pop = stack.pop()
            except IndexError:
                pop = -1
            if dic[i] != pop:
                answer = False
                break
    print('yes' if answer and not stack else 'no')
