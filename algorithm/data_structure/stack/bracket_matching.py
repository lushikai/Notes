# Author: Shikai Lu

from stack import Stack

#simple_bracket_matching
def simple_match(string):
    s = Stack()
    index= 0
    balanced = True
    while index < len(string) and balanced:
        str = string[index]
        if str == "(":
            s.push(str)
        else:
            if s.is_empty():
                balanced = False
            else:
                s.pop()
        index = index + 1
    
    if balanced and s.is_empty():
        return True
    else:
        return False

#general_bracket_matching
def general_match(string):
    s = Stack()
    index = 0
    balanced = True
    while index < len(string) and balanced:
        str = string[index]
        if str == "([{": #diff
            s.push(str)
        else:
            if s.is_empty():
                balanced = False
            else:
                top = s.pop() #diff
                if not matches(top,str):
                    balanced = False
        index = index + 1
    
    if balanced and s.is_empty():
        return True
    else:
        return False
    
def matches(open,close):
    opens = "([{"
    closes = ")]}"
    return opens.index(open) == closes.index(close)

# test  
# print(simple_match('((()))'))
# print(simple_match('(()'))