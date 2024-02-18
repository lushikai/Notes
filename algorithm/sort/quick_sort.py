# Author: Shikai Lu

#O(nlogn)
def quick_sort(list):
    if len(list) <= 1:
        return list
    else:
        pivot = list[0]
        less_than_pivot = [x for x in list[1:] if x <= pivot]
        greater_than_pivot = [x for x in list[1:] if x > pivot]
        return quick_sort(less_than_pivot) + [pivot] + quick_sort(greater_than_pivot)
    