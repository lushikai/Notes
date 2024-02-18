# Author: Shikai Lu
from binary_tree import BinaryTree

def post_order_traverse(tree) -> BinaryTree:
    if tree != None:
        post_order_traverse(tree.get_left_child())
        post_order_traverse(tree.get_right_child())
        print(tree.get_root_value())