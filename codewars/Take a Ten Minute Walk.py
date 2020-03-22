def is_valid_walk(walk):
    if len(walk) != 10:
        return False
    
    e = w = n = s = 0
    for d in walk:
        if d == 'e':
            e = e + 1
        elif d == 'w':
            w = w + 1
        elif d == 'n':
            n = n + 1
        elif d == 's':
            s = s + 1

    if e == w and n == s:
        return True
    return False

