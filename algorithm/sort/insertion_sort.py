# Author: Shikai Lu

# O(n^2)
def insertion_sort(list):
    for i in range(len(list)):
        pos = i
        current_value = list[i]
        while pos > 0 and list[pos - 1] > current_value:
            list[pos] = list[pos - 1]
            pos = pos - 1
        list[pos] = current_value
    return list