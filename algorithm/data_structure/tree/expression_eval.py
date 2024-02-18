# Author: Shikai Lu
from binary_tree import BinaryTree
from post_order_traverse import post_order_traverse
import operator

def expression_eval(tree) -> BinaryTree:
    opers = {'+': operator.add,
             '-': operator.sub,
             '*': operator.mul,
             '/': operator.truediv
             }
    ans1 = None
    ans2 = None
    if tree:
        ans1 = post_order_traverse(tree.get_left_child())
        ans2 = post_order_traverse(tree.get_right_child())
        if ans1 and ans2:
            return opers[tree.get_root_value()](ans1,ans2)
        else:
            return tree.get_root_value()