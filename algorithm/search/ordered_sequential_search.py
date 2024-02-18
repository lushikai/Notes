# Author: Shikai Lu

#O(n)
def ordered_sequential_search(list, item):
    found = False
    pos = 0
    stop = False
    while pos < len(list) and not found and not stop:
        if list[pos] == item:
            found = True
        else:
            if list[pos] > item:
                stop = True
            else:
                pos = pos + 1
    return found