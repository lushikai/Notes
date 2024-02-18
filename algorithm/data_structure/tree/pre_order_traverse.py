# Author: Shikai Lu
from binary_tree import BinaryTree

def pre_order_traverse(tree)->BinaryTree:
    tree = BinaryTree(tree)
    if tree:
        print(tree.get_root_value())
        pre_order_traverse(tree.get_left_child())
        pre_order_traverse(tree.get_right_child())
