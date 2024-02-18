# Author: Shikai Lu

#decimal to binary
from stack import Stack

def convert(decimal_num):
    s = Stack()
    while decimal_num > 0:
        tmp = decimal_num % 2
        s.push(tmp)
        decimal_num = decimal_num // 2

    binary_num = ""
    while not s.is_empty():
        binary_num = binary_num + str(s.pop())
    return binary_num

#decimal to x
#under hexadecimal
def base_convert(decimal_num, base):
    hex = "0123456789ABCDEF"

    s = Stack()
    while decimal_num > 0:
        tmp = decimal_num % base
        s.push(tmp)
        decimal_num = decimal_num // base

    x_num = ""
    while not s.is_empty():
        x_num = x_num + hex[s.pop()]
    return x_num

#test
# print(base_convert(8,2))
