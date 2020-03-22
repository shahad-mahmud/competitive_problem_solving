def toJadenCase(string):
    s = string.split()
    result = ''
    for w in s:
        e = w[0].upper()
        e = e+w[1:]
        result = result + e + ' '
    return result.strip()