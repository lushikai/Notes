# Author: Shikai Lu

from node import Node

class OrderedList:
    def __init__(self):
        self.head = None
    
    def search(self, item):
        current = self.head
        found = False
        stop = False
        while current != None and not found and not stop:
            if current.get_data() == item:
                found = True
            else:
                if current.get_data() > item:
                    stop = True
                else:
                    current = current.get_next()
        return found
    
    def add(self,item):
        current = self.head
        previous = None
        stop = False
        while current != None and not stop:
            if current.get_data() > item:
                stop = True
            else:
                previous = current
                current = current.get_next()

        tmp = Node(item)
        #Insert in the header
        if previous == None:
            tmp.set_next(self.head)
            self.head = tmp
        #Inserted in a list
        else:
            tmp.set_next(current)
            previous.set_next(tmp)
