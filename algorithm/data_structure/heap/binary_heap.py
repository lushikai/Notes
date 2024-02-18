# Author: Shikai Lu

class BinaryHeap:

    def __init__(self):
        self.heap_list = [0]
        self.current_size = 0

    def insert(self, key):
        self.heap_list.append(key)
        self.current_size += 1
        self.move_up(self.current_size)
    
    def move_up(self, i):
        while i // 2 > 0:
            if self.heap_list[i] < self.heap_list[i // 2]:
                self.heap_list[i], self.heap_list[i // 2] = self.heap_list[i // 2], self.heap_list[i]
        i //= 2
    
    def del_min_key(self):
        value = self.heap_list[1]
        self.heap_list[1] = self.del_min_key[self.current_size]
        self.current_size -= 1
        self.heap_list.pop()
        self.move_down(1)
        return value

    def move_down(self, i):
        while (i * 2) <= self.current_size:
            mc = self.min_child(i)
            if self.heap_list[i] > self.heap_list[mc]:
                self.heap_list[i], self.heap_list[mc] = self.heap_list[mc], self.heap_list[i]
            i = mc
    
    def min_child(self, i):
        if i * 2 + 1 > self.current_size:
            return i * 2
        else:
            if self.heap_list[i * 2] < self.heap_list[i * 2 + 1]:
                return i * 2
            else:
                return i * 2 + 1
    
    def build_heap(self, list):
        i = len(list) // 2
        self.current_size = len(list)
        self.heap_list = [0] + list[:]
        print(len(self.heap_list), i)
        while (i > 0):
            print(self.heap_list, i)
            self.move_down(i)
            i -= 1
        print(self.heap_list, i)
        