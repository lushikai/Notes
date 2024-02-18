# Author: Shikai Lu
from queue import Queue

#num : The number of cycles
def joseph_question(name_list, num):
    q = Queue()

    for name in name_list:
        q.enqueue(name)

    while q.size() > 1:
        for i in range(num):
            q.enqueue(q.dequeue())
        q.dequeue()
    return q.dequeue()
