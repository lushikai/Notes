# Author: Shikai Lu

# O(n)
def sequential_search(list, item):
    found = False
    pos = 0
    while pos < len(list) and not found:
        if list[pos] == item:
            found = True
        else:
            pos = pos + 1
    return found
