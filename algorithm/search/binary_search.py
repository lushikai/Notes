# Author: Shikai Lu

# O(log n)
def binary_search(list, item):
    found = False
    first = 0
    last = len(list) - 1

    while first <= last and not found:
        mid = (first + last) // 2
        if list[mid] == item:
            found = True
        else:
            if item > list[mid]:
                first = mid + 1
            else:
                last = mid - 1
    return found
