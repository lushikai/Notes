# Author: Shikai Lu
from stack import Stack

#Infix expression to Prefix expression
#Converts the infix expression to the full parenthesis form
#Move all operators to the opening(Prefix) or closing parentheses(Suffix) of the subExpression,
#replace them, and remove all parentheses

#general Infix expression to Suffix expression
def infix_to_suffix(infix):
    #Record the symbol priority first
    prior = {}
    prior["("] = 1
    prior["+"] = 2
    prior["-"] = 2
    prior["*"] = 3
    prior["/"] = 3
    operand_stack = Stack()
    suffix_list = []
    token_list = infix.split()

    for token in token_list:
        if token in "0123456789" or token in "ABCDEFGHIJKLMNOPQRSTUVWXYZ": #If it's an operand
            suffix_list.append(token)
        elif token == '(':
            operand_stack.push(token)
        elif token == ')':
            top_token = operand_stack.pop()
            while top_token != '(':
                suffix_list.append(top_token)
                top_token = operand_stack.pop()
        else:
            while (not operand_stack.is_empty()) and (prior[operand_stack.peek()] >= prior[token]):
                suffix_list.append(operand_stack.pop())
            operand_stack.push(token)
    
    while not operand_stack.is_empty():
        suffix_list.append(operand_stack.pop())
    return " ".join(suffix_list)
       