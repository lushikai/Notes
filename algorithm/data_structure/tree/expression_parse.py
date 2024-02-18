# Author: Shikai Lu

from binary_tree import BinaryTree
from algorithm.data_structure.stack.stack import Stack

def expression_parse(exp):
    exp_list = exp.split()
    s = Stack()
    bt = BinaryTree('')
    s.push(bt)
    current_tree = bt
    for i in exp_list:
        if i == '(':
            current_tree.insert_left('')
            s.push(current_tree)
            current_tree = current_tree.get_left_child()
        elif i in ['+', '-', '*', '/']:
            current_tree.set_root_value(i)
            current_tree.insert_right('')
            s.push(current_tree)
            current_tree = current_tree.get_right_child()
        elif i not in ['+', '-', '*', '/', ')']:
            current_tree.set_root_value(int(i))
            parent = s.pop()
            current_tree = parent
        elif i == ')':
            current_tree = s.pop()
        else:
            raise ValueError
        
    return bt
