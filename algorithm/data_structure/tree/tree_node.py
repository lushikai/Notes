# Author: Shikai Lu

class TreeNode:

    def __init__(self, key, value, parent = None, left = None, right = None):
        self.key = key
        self.payload = value
        self.left_child = left
        self.right_child = right
        self.parent = parent

    def has_left_child(self):
        return self.left_child
    
    def has_right_child(self):
        return self.right_child
    
    def is_left_child(self):
        return self.parent and self.parent.left_child == self
    
    def is_right_child(self):
        return self.parent and self.parent.right_child == self
    
    def is_root(self):
        return not self.parent
    
    def is_leaf(self):
        return not (self.left_child or self.right_child)
    
    def has_any_child(self):
        return self.left_child or self.right_child
    
    def has_both_child(self):
        return self.left_child and self.right_child
    
    def replace_node_data(self, key, val, lc, rc):
        self.key = key
        self.payload = val
        self.left_child = lc
        self.right_child = rc
        if self.has_left_child():
            self.left_child.parent = self
        elif self.has_right_child():
            self.right_child.parent = self