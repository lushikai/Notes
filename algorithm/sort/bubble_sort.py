# Author: Shikai Lu

# O(n^2)
def bubble_sort(list):
    for i in range(len(list) - 1):
        for j in range(len(list) - 1 - i):
            if list[j] > list[j+1]:
                list[j], list[j+1] = list[j+1], list[j]
    return list