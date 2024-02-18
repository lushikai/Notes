# Author: Shikai Lu
from binary_tree import BinaryTree

def in_order_traverse(tree) -> BinaryTree:
    if tree != None:
        in_order_traverse(tree.get_left_child())
        print((tree.get_root_value()))
        in_order_traverse(tree.get_right_child())
