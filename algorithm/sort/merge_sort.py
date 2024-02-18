# Author: Shikai Lu

# Divide and Conquer
# O(nlogn)
def merge_sort(list):

    if len(list) <= 1:
        return list
    
    mid = len(list) // 2
    left = merge_sort(list[:mid])
    right = merge_sort(list[mid:])

    merged = []
    while left and right:
        if left[0] <= right[0]:
            merged.append(left.pop(0))
        else:
            merged.append(right.pop(0))
    merged.extend(right if right else left)
    return merged