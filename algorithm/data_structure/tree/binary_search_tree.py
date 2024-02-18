# Author: Shikai Lu
from tree_node import TreeNode

class BinarySearchTree:
    
    def __init__(self):
        self.root = None
        self.size = 0
    
    def __len__(self):
        return self.size
    
    def length(self):
        return self.size
    
    def __iter__(self):
        return self.root.__iter__()
    
    def _put(self, key, val, current_node : TreeNode):
        if key < current_node.key:
            if current_node.has_left_child():
                self._put(key, val, current_node.left_child)
            else:
                current_node.left_child = TreeNode(key, val, parent = current_node)
        else:
            if current_node.has_right_child():
                self._put(key, val, current_node.right_child)
            else:
                current_node.right_child = TreeNode(key, val, parent = current_node)

    def put(self, key, val):
        if self.root:
            self._put(key, val, self.root)
        else:
            self.root = TreeNode(key, val)
        self.size += 1

    def __setitem__(self,k,v):
        self.put(k,v)

    def _get(self, key, current_node):
        if not current_node:
            return None
        

    def get(self, key):
        if self.root:
            pass