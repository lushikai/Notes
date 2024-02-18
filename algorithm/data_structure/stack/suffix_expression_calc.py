# Author: Shikai Lu
from stack import Stack

#calculate
def calc(op, op1, op2):
    if op == "*":
        return op1 * op2
    elif op == "/":
        return op1 / op2
    elif op == "+":
        return op1 + op2
    else:
        return op1 - op2
    
def eval(suffix):
    operand_stack = Stack()
    token_list = suffix.split()

    for token in token_list:
        if token in "0123456789":
            operand_stack.push(int(token))
        else:
            operand2 = operand_stack.pop()
            operand1 = operand_stack.pop()
            ans = calc(token, operand1, operand2)
            operand_stack.push(ans)
    return operand_stack.pop()
