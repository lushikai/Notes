# Author: Shikai Lu

# O~(n^3/2)
def shell_sort(list):
    gap = len(list) // 2
    while gap > 0:
        for i in range(gap, len(list)):
            tmp = list[i]
            j = i
            while j >= gap and list[j - gap] > tmp:
                list[j] = list[j - gap]
                j -= gap
            list[j] = tmp
        gap //= 2
    return list