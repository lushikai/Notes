# Author: Shikai Lu

from node import Node

#An unordered list must have a reference to the first node
class UnorderedList:

    def __init__(self):
        self.head = None
    
    def is_empty(self):
        return self.head == None
    
    def add(self,item):
        tmp = Node(item)
        tmp.set_next(self.head)
        self.head = tmp
        
    def size(self):
        cnt = 0
        current = self.head
        while current != None:
            cnt = cnt + 1
            current = current.get_next()
        return cnt
    
    def search(self, item):
        found = False
        current = self.head
        while current != None and not found:
            if current.get_data() == item:
                found = True
            else:
                current = current.get_next()
        return found
    
    def remove(self,item):
        current = self.head
        previous = None
        found = False
        #Find it before you delete it
        while not found:
            if current.get_data() == item:
                found = True
            else:
                previous = current
                current = current.get_next()
        
        if previous == None:
            self.head = current.get_next()
        else:
            previous.set_next(current.get_next())