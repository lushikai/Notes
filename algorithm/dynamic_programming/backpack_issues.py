# Author: Shikai Lu

# the weight and value of treasure
treasure = [None, 
            {'w':2, 'v':3},
            {'w':3, 'v':4},
            {'w':4, 'v':8},
            {'w':5, 'v':8},
            {'w':9, 'v':10}]

# max weight
max_w = 20

# initialize two-dimensional array
# when don't take any treasure or weight => 0, value is 0
m = {(i, j):0 for i in range(len(treasure)) for j in range(max_w + 1)}

for i in range(1, len(treasure)):
    for j in range(1, max_w + 1):
        if treasure[i]['w'] > j:  #when No.i treasure can't take overweight
            m[(i, j)] = m[(i - 1, j)]
        else:
            #compare
            m[(i, j)] = max(m[(i - 1, j)], m[(i - 1, j - treasure[i]['w'])] + treasure[i]['v'])

# test
print(m[(len(treasure) - 1, max_w)])
