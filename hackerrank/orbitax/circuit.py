# n = int(input())
s = input()
stack = []

for i in range(len(s)):
    if s[i] !=' ' and s[i] != ',':
        if s[i] != ']':
            stack.append(s[i])
        elif s[i] == ']':
            n1, n2 = None, None
            op = None
            s_char = stack[-1]
            del stack[-1]
            while s_char != '[':
                if (s_char == '0' or s_char == '1') and n1 == None:
                    n1 = bool(ord(s_char) - ord('0'))
                elif (s_char == '0' or s_char == '1') and n2 == None:
                    n2 = bool(ord(s_char) - ord('0'))
                if s_char == '!' or s_char == '|' or s_char == '&':
                    op = s_char
                
                s_char = stack[-1]
                del stack[-1]
            
            if(n1 == None or n2 == None):
                val = int(not n1)
                stack.append(chr(val + ord('0')))
            elif op == '|':
                val = int(n1 or n2)
                stack.append(chr(val + ord('0')))
            elif op == '&':
                val = int(n1 and n2)
                stack.append(chr(val + ord('0')))

if(len(stack) == 1):
    print(stack[0])
else:
    print(-1)
