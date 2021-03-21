import base64

def int_to_bin(num):
    if num <= 1:
        return str(num)
    return int_to_bin(num//2) + str(num % 2)

def bin_to_int(bin, len):
    dec = 0
    for b in bin:
        dec += int(b) * 2 ** (len-1)
        len -= 1
    return int(dec)

def convert_to_six(bin):
    return '0' * (6-len(bin)) + bin

# character - index map
char_to_index = {}
valid_chars = ['.', '/', ':']

# upper and lower case latters
for i in range(26):
    char_to_index[chr(ord('A') + i)] = convert_to_six(int_to_bin(i))
    char_to_index[chr(ord('a') + i)] = convert_to_six(int_to_bin(i + 26))
    valid_chars.append(chr(ord('A') + i))
    valid_chars.append(chr(ord('a') + i))

# numbers
for i in range(10):
    char_to_index[chr(i + ord('0'))] = convert_to_six(int_to_bin(i + 52))
    valid_chars.append(chr(ord('0') + i))

# print(valid_chars)

# symbols
char_to_index['+'] = convert_to_six(int_to_bin(62))
char_to_index['/'] = convert_to_six(int_to_bin(63))

valid_chars_decode = list(char_to_index.keys())
print(valid_chars_decode)
print(type(valid_chars_decode))

inp_string = 'aHR0cHM6Ly9mb3Jtcy5nbGUvWU5ZXQ0d2NRWHVLNnNwdjU='

f = open("urls.txt", "a+")
for i in range(24, len(inp_string)):
    for j in valid_chars_decode:
        temp_string = inp_string[:i] + j + inp_string[i:]
        try:
            temp_plain_text = base64.b64decode(temp_string).decode('ascii')
            f.write(temp_plain_text + '\n')
        except:
            pass
f.close()

        