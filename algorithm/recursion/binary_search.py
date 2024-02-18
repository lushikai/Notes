# Author: Shikai Lu

# Divide and conquer
def binary_search(list,item):
    if len(list) == 0:
        return False
    else:
        mid = len(list) // 2
        if list[mid] == item:
            return True
        else:
            if item > list[mid]:
                return binary_search(list[mid + 1:], item)
            else:
                return binary_search(list[:mid], item)
