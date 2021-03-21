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
binary_stream = ''

for char in inp_string:
    if char != '=':
        binary_stream += char_to_index[char]

plain_text = ''
for i in range(0, len(binary_stream), 8):
    bin_ascii = binary_stream[i:i+8]
    if(len(bin_ascii) != 8):
        continue
    int_ascii = bin_to_int(bin_ascii, len(bin_ascii))
    ascii_char = chr(int_ascii)
    if ascii_char not in valid_chars:
        continue
    plain_text += ascii_char
print(plain_text)

f = open("urls.txt", "a+")

for i in range(24, len(inp_string)):
    for j in valid_chars_decode:
        temp_string = inp_string[:i] + j + inp_string[i:]
        # print(temp_string)
        temp_bin_stream = ''
        for char in temp_string:
            if char != '=':
                temp_bin_stream += char_to_index[char]
        temp_plain_text = ''
        # print(len(temp_bin_stream))
        for i in range(0, len(temp_bin_stream), 8):
            bin_ascii = temp_bin_stream[i: i+8]
            if(len(bin_ascii) != 8):
                continue
            int_ascii = bin_to_int(bin_ascii, len(bin_ascii))
            ascii_char = chr(int_ascii)
            if ascii_char not in valid_chars:
                continue
            temp_plain_text += ascii_char
        # print(temp_plain_text)
        f.write(temp_plain_text + '\n')
f.close()

print(len('aHR0cHM6Ly9mb3Jtcy5nbGUv'))
