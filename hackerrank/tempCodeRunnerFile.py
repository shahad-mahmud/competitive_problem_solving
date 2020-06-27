st = input()
res = ''

HOME = 0
END = 1
BACK_SPACE = 2

NUM_LOCK_ON = True

flag = END

for char in st:
    if char == '<':
        flag = HOME
        continue
    if char == '>':
        flag = END
        continue
    if char == '*':
        res = res[:-1]
        continue
    if char == '#': 
        NUM_LOCK_ON = not NUM_LOCK_ON
        continue

    if ((char >= '0' and char <= '9') and NUM_LOCK_ON) or not (char >= '0' and char <= '9'):
        if flag == HOME:
            res = char + res
            continue
        if flag == END:
            res += char
            continue


print(res)

