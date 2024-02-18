# Author: Shikai Lu

#O(n^2)
def selection_sort(list):
    for i in range(len(list) - 1):
        max_pos = 0
        for j in range(i):
            if list[j] > list[max_pos]:
                max_pos = j
        list[i], list[max_pos] = list[max_pos], list[i]
    return list

# def selection_sort(list):
#     for i in range(len(list) - 1):
#         min_pos = i
#         for j in range(i + 1, len(list)):
#             if list[j] < list[min_pos]:
#                 min_pos = j
#         list[i], list[min_pos] = list[min_pos], list[i]
#     return list