st = input()
res = ''

HOME = 0
END = 1
BACK_SPACE = 2
HOME_CON = 3



index = 0

NUM_LOCK_ON = True

flag = END

for char in st:
    if char == '<':
        flag = HOME
        index = 0
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
            flag = HOME_CON
            index += 1
            continue
        if flag == END:
            res += char
            continue
        if flag == HOME_CON:
            res = res[:index] + char + res[index:]
            index += 1


print(res)

