# Author: Shikai Lu

# the weight and value of treasure
treasure = {(2,3),
            (3,4), 
            (4,8), 
            (5,8), 
            (9,10)}

# max weight
max_w = 20

m = {}

def backpack_issue(treasure, w):
    if treasure == set() or w == 0:
        m[(tuple(treasure), w)] = 0
        return 0
    elif (tuple(treasure), w) in m:
        return m[(tuple(treasure), w)]
    else:
        v_max = 0
        for tr in treasure:
            if tr[0] <= w:
                v = backpack_issue(treasure - {tr}, w - tr[0]) + tr[1]
                v_max = max(v_max, v)
        m[(tuple(treasure), w)] = v_max
        return v_max
    
# test
print(backpack_issue(treasure, max_w))
