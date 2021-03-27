PRIME = 100000007

def cal(op, n1, n2):
    if op == '+':
        return (n1 % PRIME + n2 % PRIME) % PRIME
    if op == '-':
        return (n1 % PRIME - n2 % PRIME) % PRIME
    if op == '*':
        return (n1 % PRIME * n2 % PRIME) % PRIME
    if op == '/':
        return (n1 % PRIME // n2 % PRIME) % PRIME

def op_pre(op):
    if op == '+' or op == '-':
        return 1
    if op == '*' or op == '/':
        return 2
    return 0

def calculate(s):
    nums =[]
    oprtr = []
    ln = len(s)
    i = 0

    while i < ln:
        if s[i] != ' ':
            if s[i] == '(':
                oprtr.append(s[i])

            elif(s[i] == ')'):
                while(len(oprtr) != 0 and oprtr[-1] != '('):
                    num2 = nums.pop()
                    num1 = nums.pop()
                    op = oprtr.pop()

                    nums.append(cal(op, num1, num2))
                oprtr.pop()
            
            elif s[i].isdigit():
                value = 0

                while(i < ln and s[i].isdigit()):
                    value = (value * 10) + int(s[i])
                    i += 1
                nums.append(value)
                i -= 1
            
            else:
                while(len(oprtr) != 0 and op_pre(oprtr[-1]) >= op_pre(s[i])):
                    num2 = nums.pop()
                    num1 = nums.pop()
                    op = oprtr.pop()

                    nums.append(cal(op, num1, num2))
                oprtr.append(s[i])
            # print(nums)
            # print(oprtr, '\n')
        i += 1

    while(len(oprtr) != 0)       :
        num2 = nums.pop()
        num1 = nums.pop()
        op = oprtr.pop()

        nums.append(cal(op, num1, num2))
    
    # print(nums)
    # print(oprtr, '\n')
    
    return nums[-1]

expression = input()
print(calculate(expression))